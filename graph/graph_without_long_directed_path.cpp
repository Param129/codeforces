#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 2e5 + 5;
vector<vector<int>> adj(MAX_N);
vector<int> col(MAX_N, -1); // initialize to -1 so that a 0 value is not wrongly considered
vector<bool> vis(MAX_N);

bool dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) {
        if (col[v] == col[u]) return false;
        else if (!vis[v]) {
            col[v] = !col[u];
            if (!dfs(v)) return false;
        }
    }
    return true;
}

int main() {


    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        edges.push_back({u, v});
    }

    col[1] = 0;
    if (!dfs(1)) {
        cout << "NO";
    } else {
        cout << "YES" << endl;
        string ans = "";
        for (const auto& edge : edges) {
            int u = edge[0], v = edge[1];
            if (col[u] == 0) {
                ans += "0";
            } else {
                ans += "1";
            }
        }
        cout << ans;
    }

    return 0;
}
