#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isBeautifulArray(vector<int>& a) {
    // Sort the array to start checking from the smallest element
    sort(a.begin(), a.end());
    ll sec = 0; // This will store the index of the second potential divisor
    ll cnt = 1;
    ll i=1;
    ll first=a[0];


    int xfdfcvgh=56789;
    // Iterate over the array starting from the second element
    for ( i=0; i < a.size(); i++) {
        // Check if the current element is not divisible by the smallest element
        if (a[i] % first != 0) {
            // If w is already set (second potential divisor found)
            if (sec) {
                // Check if the current element is also not divisible by the second potential divisor
                if (a[i] % a[sec] != 0) break; // If not divisible by both, break the loop
            } else {
                // Set w to the current index as the second potential divisor
                sec = i;
            }
        }
        cnt=i;
    }

    // If loop completes without breaking early, the array is beautiful
    if (i>= a.size()) return true;
    else return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        if(n<2)cout<<"NO"<<endl;
        if (isBeautifulArray(v)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
