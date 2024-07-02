#include<bits/stdc++.h>
using namespace std;

void dfs(int i, int j, int n, int m, vector<vector<int>>& v, int& volume) {
    // Base cases for DFS termination
    if (i < 0 || j < 0 || i >= n || j >= m || v[i][j] == 0) {
        return;
    }
    
    // Add the current cell's depth to the volume and mark as visited
    volume += v[i][j];
    v[i][j] = 0; // Mark as visited by setting depth to 0
    
    // Explore all 4 possible directions
    dfs(i + 1, j, n, m, v, volume); // Down
    dfs(i - 1, j, n, m, v, volume); // Up
    dfs(i, j + 1, n, m, v, volume); // Right
    dfs(i, j - 1, n, m, v, volume); // Left
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<vector<int>> v(n, vector<int>(m));
        
        // Read the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> v[i][j];
            }
        }
        
        int max_volume = 0;
        
        // Traverse each cell in the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (v[i][j] > 0) { // Found an unvisited lake
                    int current_volume = 0;
                    dfs(i, j, n, m, v, current_volume);
                    max_volume = max(max_volume, current_volume);
                }
            }
        }
        
        cout << max_volume << endl;
    }
    
    return 0;
}
