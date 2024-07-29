#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

#define int long long
using namespace std;

signed main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int mn = LLONG_MAX;
        for (int i = 1; i < n; i++) {
            mn = min(mn, a[i] - a[i - 1]);
        }

        if (mn <0) {
            cout << 0 << endl;
        } else {
            cout << (mn + 2) / 2 << endl;
        }
    }
    return 0;
}
