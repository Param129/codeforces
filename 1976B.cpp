#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);
        vector<long long> b(n + 1);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (long long j = 0; j < n + 1; j++) {
            cin >> b[j];
        }

        long long x = b[n];
        long long mn = INT_MAX;
        long long el = a[0];
        long long fl=0;

        for (long long i = 0; i < n; i++) {
            if(x>=min(a[i],b[i]) && x<=max(a[i],b[i]))fl=100;
            mn=min(mn,abs(a[i]-x));
            mn=min(mn,abs(x-b[i]));
        }

        a.push_back(el);  // Append the selected element to the end of a
        long long ans = 0;
        
        // Calculate the total operations needed
        for (long long i = 0; i < n ; i++) {
            ans += abs(a[i] - b[i]);
        }   

        if(fl==100)cout<<ans+1<<endl;

        else cout << ans+mn+1<< endl;
    }
    return 0;
}
