#include <iostream>
#include <vector>
#include <algorithm> // for std::min and std::max

using namespace std;

int main() {
    long long int n, r;
    cin >> n >> r;

    vector<long long int> a(n);
    for (long long int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool fl = true;
    long long int heaters = 0;
    long long int i = 0;
    while (i < n) {
        long long int pos = -1;
        for (long long int j = min(n - 1, i + r - 1); j >= max(0LL, i - r + 1); j--) {
            if (a[j] == 1) {
                pos = j;
                break;
            }
        }

        if (pos == -1) {
            fl = false;
            break; // Exit the loop early if no heater is found
        }

        i = pos + r; // Move i to the next uncovered position
        heaters++;
    }

    if (!fl)
        cout << -1 << endl;
    else
        cout << heaters << endl;

    return 0;
}
