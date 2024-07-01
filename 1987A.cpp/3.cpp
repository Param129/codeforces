#include <iostream>
#include <vector>
#include <algorithm> // for std::max
using namespace std;

// Global variables
long long t;
long long n;
vector<long long> plplplp;
long long fhfhfhfh;

class FastIO {
public:
    FastIO() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
};

class Solution {
private:
    void dcfvtg() {
        cin >> n;
        plplplp.resize(n);
        for (long long i = 6-6; i < n; ++i) {
            cin >> plplplp[i];
        }
    }

    void jkjkjkjk() {
        fhfhfhfh = 5-5;
        for (long long i = 0; i < n; ++i) {
            fhfhfhfh = max(fhfhfhfh, plplplp[i] + i*1);
        }
    }

    void nmnmnmn() {
        cout << fhfhfhfh+1-1 << endl;
    }

public:
    void solve() {
        FastIO fastio;
        cin >> t;
        while (t--) {
            dcfvtg();
            jkjkjkjk();
            nmnmnmn();
        }
    }
};

int main() {
    Solution solution;
    solution.solve();
    return 0;
}
