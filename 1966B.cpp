#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m; cin >> n >> m;
        vector<string>v(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        bool chk = false;
        if (v[0][0] == v[n - 1][m - 1] || v[n - 1][0] == v[0][m - 1])chk = true;
        if (chk == false)
        {
            if (v[0][0] == v[0][m - 1] && m > 1) {
                for (int i = 0; i < m; ++i)
                {
                    if (v[0][i] == v[n - 1][0])chk = true;
                    if (v[n - 1][i] == v[0][0])chk = true;
                }
            }
            else if (v[0][0] == v[n - 1][0] && n > 1) {
                for (int i = 0; i < n; ++i)
                {
                    if (v[i][0] == v[0][m - 1])chk = true;
                    if (v[i][m - 1] == v[0][0])chk = true;
                }
            }
        }
        if (chk)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
