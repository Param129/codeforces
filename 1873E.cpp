#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> v(n);

        long long mx = INT_MIN;
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(mx, v[i]);
        }

        long long l = 1;
        long long h = 1e10;
        long long ans = 0;

        while (l <= h) {
            long long mid = l + (h - l) / 2;
            long long water = 0; // Reset water for each binary search iteration

            for (long long i = 0; i < n; i++) {
                water += max(0LL, mid - v[i]);
            }

            if (water <= x) {
                ans = mid; // Update the answer1889A.cpp
                l = mid + 1; // Try for a higher height
            } else {
                h = mid - 1; // Try for a lower height
            }
        }

        cout << ans << endl;
    }
    return 0;
}
