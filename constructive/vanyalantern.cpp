#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double ans = 0;
    // Check the distance from the first lantern to the start of the street
    ans = max(ans, (double)a[0]);
    // Check the distance from the last lantern to the end of the street
    ans = max(ans, (double)(l - a[n-1]));

    // Check the distances between consecutive lanterns
    for (int i = 1; i < n; i++) {
        ans = max(ans, (double)(a[i] - a[i-1]) / 2.0);
    }

    // Output the answer with 9 decimal precision
    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}
