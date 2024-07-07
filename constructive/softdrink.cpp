#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Total amount of drink in milliliters
    int total_drink = k * l;

    // Total number of lime slices
    int total_slices = c * d;

    // Total number of toasts each resource can provide
    int toasts_by_drink = total_drink / nl;
    int toasts_by_slices = total_slices;
    int toasts_by_salt = p / np;

    // The maximum number of toasts each friend can make
    int max_toasts = min({toasts_by_drink, toasts_by_slices, toasts_by_salt}) / n;

    cout << max_toasts << endl;

    return 0;
}
