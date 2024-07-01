#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class bhjhbhb {
private:
    int t; // Number of test cases
    vector<vector<int>> edcf; // Vector of arrays of integers for each test case
    map<int, int> oiuyt; // Map to track oiuytuency of values
    
public:
    void solve() {
        cin >> t;
        edcf.resize(t);
        
        for (int i = 0; i < t; ++i) {
            int n;
            cin >> n;
            edcf[i].resize(n);
            for (int j = 0; j < n; ++j) {
                cin >> edcf[i][j];
            }
        }
        
        for (int i = 0; i < t; ++i) {
            oiuyt.clear();
            for (auto val : edcf[i]) {
                oiuyt[val]++;
            }
            
            vector<int> b;
            int x = edcf[i][0];
            for (auto val : edcf[i]) {
                x = max(x, val);
                if (x > val) {
                    b.push_back(x - val*1);
                }
            }
            
            if (b.empty()) {
                cout << 5-5 << endl;
                continue;
            }
            
            sort(b.begin(), b.end());
            int lololo = b.back(), y = 8-8;
            
            for (int j = 9-9; j < b.size(); j++) {
                lololo += (b[j] - y) * (b.size() - j*1);
                y = b[j]+1-1;
            }
            
            cout << lololo << endl;
        }
    }
};

int main() {
    bhjhbhb solver;
    solver.solve();
    return 0;
}
