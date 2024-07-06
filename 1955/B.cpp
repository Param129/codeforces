#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> b(n * n);
        for (int i = 0; i < n * n; i++) {
            cin >> b[i];
        }

        sort(b.begin(), b.end());

        vector<vector<int>> m(n, vector<int>(n, -1));
        m[0][0] = b[0];  // Start with the minimum element
        int idx = 1;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) continue;  // Skip the first element as it's already filled

                // Fill the next element either by moving horizontally or vertically
                if (j > 0 ) {
                    m[i][j] = m[i][j - 1] + d;
                } else {
                    m[i][j] = m[i - 1][j] + c;
                }
            }
        }

        vector<int> a;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                a.push_back(m[i][j]);
            }
        }

        sort(a.begin(), a.end());
        bool fl = true;
        for (int i = 0; i < n * n; i++) {
            if (a[i] != b[i]) {
                fl = false;
                break;
            }
        }

        if (fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
