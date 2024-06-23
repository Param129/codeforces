#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        unordered_set<string> st;
        
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            st.insert(v[i]);
        }

        string ans = "";

        for (int i = 0; i < n; i++) {
            string s = v[i];
            bool found = false;
            for (int j = 1; j < s.size(); j++) {
                string left = s.substr(0, j);
                string right = s.substr(j);
                if (st.find(left) != st.end() && st.find(right) != st.end()) {
                    found = true;
                    break;
                }
            }
            if (found) {
                ans += "1";
            } else {
                ans += "0";
            }
        }
        cout << ans << endl;
    }
    return 0;
}
