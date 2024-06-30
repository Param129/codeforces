#include<bits/stdc++.h>
using namespace std;

int n, m;
int ans = 0;
vector<int> c, vis;
vector<vector<int>> adj;

void dfs(int i, int cons) {
    vis[i] = 1;

    if (cons > m) return;
    bool isLeaf = true;

    for (auto it : adj[i]) {
        if (!vis[it]) {
            isLeaf = false;
            if (c[it] == 1) {
                dfs(it, cons + 1);
            } else {
                dfs(it, 0); // Reset consecutive count to 0 for non-cat vertex
            }
        }
    }

    if (isLeaf) {
        ans++;
    }
}

int main() {
    cin >> n >> m;
    c.resize(n);
    vis.resize(n, 0);
    adj.resize(n); // Correct size to n

    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a--; b--; // Decrement to 0-based index
        adj[a].push_back(b);
        adj[b].push_back(a); // Since it's an undirected tree
    }

    dfs(0, c[0]); // Start DFS from root, which is vertex 0 in 0-based indexing

    cout << ans << endl;

    return 0;
}
