#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<bool> vis(n + 1, false);

        // Process each number in the array
        for (int i = 0; i < n; i++) {
            int x = a[i];
            while (x > n || (x > 0 && vis[x])) {
                x /= 2;  // Keep dividing by 2 until x is within range and not already used
            }
            if (x > 0) {
                vis[x] = true;  // Mark the number as used
            }
        }

        bool possible = true;
        for (int i = 1; i <= n; i++) {
            if (!vis[i]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
