#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        int cnt = 0;
        for (int i = 0; i < n; i += 2) {  // Place kings on alternate rows
            for (int j = 0; j < m; ++j) {
                if ((i + j) % 2 == 0) {  // Place kings on white cells only
                    cnt++;
                }
            }
        }
        
        cout << cnt << endl;
    }
    return 0;
}
