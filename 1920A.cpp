#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<pair<long long, long long>> v;

        for (long long i = 0; i < n; i++) {
            long long a, x;
            cin >> a >> x;
            v.push_back({a, x});
        }

        long long l = LLONG_MIN;
        long long h = LLONG_MAX;
        unordered_set<long long> s;

        for (long long i = 0; i < n; i++) {
            long long a = v[i].first;
            long long x = v[i].second;
            if (a == 1) {
                l = max(l, x);
            } else if (a == 2) {
                h = min(h, x);
            } else if (a == 3) {
                s.insert(x);
            }
        }

        if (l > h) {
            cout << 0 << endl;
        } else {
            long long cnt = (h - l + 1); // Total numbers in range [l, h]
            for (auto it = s.begin(); it != s.end(); ++it) {
                if (*it >= l && *it <= h) {
                    cnt--; // Subtract the count of elements present in the set
                }
            }
            cout << cnt << endl;
        }
    }
    return 0;
}
