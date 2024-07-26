#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<int, int>> newa;
        vector<int> newb(n);

        for (int i = 0; i < n; i++) {
            newa.emplace_back(a[i], i);
        }
        for (int i = 0; i < n; i++) {
            newb[i] = b[i];
        }

        sort(newa.begin(), newa.end());
        sort(newb.begin(), newb.end());

        vector<int> ans(n);

        for (int i = 0; i < n; i++) {
            int idx = newa[i].second;
            int val = newb[i];
            ans[idx] = val;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
