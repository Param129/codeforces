#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    if (n <= 2) {
        cout << 0 << endl;
        return 0;
    }

    int min_changes = INT_MAX;
    vector<int> deltas = {-1, 0, 1};

    // Try every combination of changes for the first two elements
    for (int d1 : deltas) {
        for (int d2 : deltas) {
            vector<int> a = b;
            a[0] += d1;
            a[1] += d2;
            int diff = a[1] - a[0];
            int changes = abs(d1) + abs(d2);

            bool valid = true;
            for (int i = 2; i < n; i++) {
                int expected = a[0] + i * diff;
                if (abs(b[i] - expected) > 1) {
                    valid = false;
                    break;
                }
                changes += abs(b[i] - expected);
            }

            if (valid) {
                min_changes = min(min_changes, changes);
            }
        }
    }

    if (min_changes == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_changes << endl;
    }

    return 0;
}
