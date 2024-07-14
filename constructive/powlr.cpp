#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long l, r, k;
    cin >> l >> r >> k;

    vector<long long> powers;

    long long power = 1;
    int i = 0;
    while (power <= r) {
        if (power >= l && power <= r) {
            powers.push_back(power);
        }

        // Prevent overflow or excessively large powers
        if (k > 1 && r / k < power) break;

        // Calculate next power
        power *= k;
        ++i;
    }

    if (powers.empty()) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < powers.size(); ++i) {
            cout << powers[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
