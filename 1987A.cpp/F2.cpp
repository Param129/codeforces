#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 5010;

class Tree {
private:
    int n;
    vector<long long> animals;
    vector<vector<long long>> children;
    vector<long long> cost;
    vector<vector<long long>> dp;

public:
    Tree() {
        children.resize(N);
        cost.resize(N);
        dp.resize(N, vector<long long>(N, 0));
    }

    void bfs(long long root) {
        queue<long long> q;
        q.push(root);
        
        while (!q.empty()) {
            long long x = q.front();
            q.pop();
            
            if (children[x].empty()) {
                for (int i = 1; i <= n; i++) {
                    dp[x][i] = 1e9;
                }
                cost[x] = 0;
                continue;
            }
            
            long long sum = 0;
            cost[x] = 0;
            for (auto j : children[x]) {
                q.push(j); // Push child nodes into the queue for processing
            }
            
            while (!q.empty()) {
                long long j = q.front();
                q.pop();
                bfs(j);
                cost[x] += cost[j];
                sum += animals[j];
            }
            
            long long excess = animals[x] - sum;
            for (int i = 1; i <= n; i++) {
                if (excess <= 0) break;
                for (auto j : children[x]) {
                    if (excess <= 0) break;
                    if (dp[j][i] <= excess) {
                        cost[x] += i * dp[j][i];
                        excess -= dp[j][i];
                        dp[j][i] = 0;
                    } else {
                        cost[x] += i * excess;
                        dp[j][i] -= excess;
                        excess = 0;
                    }
                }
            }
            
            if (excess < 0) dp[x][1] = -excess;
            for (int i = 2; i <= n; i++) {
                long long cumulative_cost = 0;
                for (auto j : children[x]) {
                    if (dp[j][i - 1] == 1e9) {
                        cumulative_cost = 1e9;
                        break;
                    }
                    cumulative_cost += dp[j][i - 1];
                }
                dp[x][i] = cumulative_cost;
            }
        }
    }

    void solve() {
        cin >> n;
        animals.resize(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> animals[i];
            children[i].clear();
        }
        
        for (int i = 2; i <= n; i++) {
            long long parent;
            cin >> parent;
            children[parent].push_back(i);
        }
        
        bfs(1);
        cout << cost[1] << "\n";
    }
};

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        Tree tree;
        tree.solve();
    }

    return 0;
}
