#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans = "";

        for (int i = n - 1; i >= 0; ) {
            if (s[i] != '0') {
                // Single-digit number
                ans += char((s[i] - '0') + 'a' - 1);
                i--;
            } else {
                // Two-digit number
                string t = s.substr(i - 2, 2);
                ans += char(stoi(t) + 'a' - 1);
                i -= 3;
            }
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}
