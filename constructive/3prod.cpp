#include <iostream>
#include <set>
#include <vector>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> factors;

        for (int i = 2; i * i <= n && factors.size() < 2; ++i) {
            if (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }

        if (factors.size() < 2 || n <= 1 || factors[0] == n || factors[1] == n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            cout << factors[0] << " " << factors[1] << " " << n << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
