#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        if (n < 1024) {
            cout << n << "B" << endl;
        } else if (n < 1024 * 1024) {
            long long kib = n / 1024;
            cout << kib << "KiB" << endl;
        } else {
            long long mib = n / (1024 * 1024);
            cout << mib << "MiB" << endl;
        }
    }
    return 0;
}
