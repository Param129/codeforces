#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n), b(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (long long i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long mn1 = *min_element(a.begin(), a.end());
        long long mn2 = *min_element(b.begin(), b.end());

        long long cnt = 0;
        for (long long i = 0; i < n; i++) {
            long long x = a[i];
            long long y = b[i];

            // Calculate moves to equalize each gift
            cnt += max(x - mn1, y - mn2);
        }

        cout << cnt << endl;
    }

    return 0;
}
