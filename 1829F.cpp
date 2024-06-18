#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> adj(n + 1); // 2D vector for adjacency list

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        int x = 0, y = 0;
        int u = 0;

        // Find a leaf node (a node with exactly one neighbor)
        for (int i = 1; i <= n; i++) {
            if (adj[i].size() == 1) {
                u = adj[i][0];
                break;
            }
        }

        // The node connected to a leaf node is part of the x vertices
        y = adj[u].size();

        // Find x by checking the degree of neighbors of the central vertex
        for (auto r : adj[u]) {
            if (adj[r].size() > 1) {
                x = adj[r].size();
                break;
            }
        }

        cout << x << " " << y - 1 << endl;
    }
    return 0;
}
