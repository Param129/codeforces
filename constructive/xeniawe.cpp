#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int m;
    cin >> m;

    // Count available weights
    int availableWeights = 0;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '1') {
            availableWeights++;
        }
    }

    // Edge case checks
    if (availableWeights == 0 && m > 0) {
        cout << "NO" << endl;
        return 0;
    }
    if (availableWeights == 1 && m > 1) {
        cout << "NO" << endl;
        return 0;
    }

    // Find two different weights to use alternately
    int one = -1, two = -1;
    for (int i = 0; i < 10; ++i) {
        if (s[i] == '1') {
            if (one == -1) {
                one = i + 1;
            } else if (two == -1) {
                two = i + 1;
                break;
            }
        }
    }

    cout << "YES" << endl;
    // Place weights alternately
    for (int i = 0; i < m; ++i) {
        if (i % 2 == 0) {
            cout << one << " ";
        } else {
            cout << two << " ";
        }
    }
    cout << endl;

    return 0;
}
