#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        long long l = 1;
        long long h = 1e10;
        long long ans = 1;
        while (l <= h) {
            long long mid = (l + h) / 2;
            if ((mid * (mid - 1)) / 2 <= n) {
                ans = max(ans, mid);
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        long long k = ans * (ans - 1) / 2;
        cout << ans + (n - k) << endl;
    }
    return 0;
}
