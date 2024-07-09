#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m, '.'));

    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            // Fill from left to right
            for (int j = 0; j < m; ++j) {
                v[i][j] = '#';
            }
        } else {
            // Fill from right to left
            if (i % 4 == 1) {
                v[i][m - 1] = '#';
            } else {
                v[i][0] = '#';
            }
        }
    }

    // Output the result
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v[i][j];
        }
        cout << endl;
    }

    return 0;
}
