#include <bits/stdc++.h>
using namespace std;

int calculateMaxStrength(const string& L, const string& R) {
    int maxStrength = 0;
    int n = L.size(), m = R.size();

    // Pad the shorter string with leading zeros
    string L_padded = string(m - n, '0') + L;
    
    for (int i = 0; i < m; ++i) {
        if (L_padded[i] != R[i]) {
            // Calculate the strength from this point
            maxStrength = (m - i - 1) * 9 + abs(L_padded[i] - R[i]);
            break;
        }
    }
    
    return maxStrength;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string L, R;
        cin >> L >> R;
        
        cout << calculateMaxStrength(L, R) << endl;
    }
    return 0;
}
