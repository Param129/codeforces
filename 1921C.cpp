#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long rem = f; // initial charge
        bool fl = true;
        long long current_time = 0;

        for (long long i = 0; i < n; i++) {
            long long gap = v[i] - current_time;

            // Calculate charge left if phone remains on
            long long charge_if_on = (gap * a);
            long long off=b;
            long long mn=min(charge_if_on,off);

            rem=rem-mn;

            if(rem<=0){
                fl=false;
                break;
            }

            current_time = v[i]; // update current time
        }

        if (fl) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
