#include <bits/stdc++.h>
using namespace std;

int solve(int i, string &s, vector<int> &dp) {
    if (i >= s.size()) {
        return 0;
    }
    if (dp[i] != -1) {
        return dp[i];
    }

    if (s[i] == '*') {
        return dp[i] = 0;
    }

    int take = (s[i] == '@') ? 1 : 0;
    int move1 = solve(i + 1, s, dp);
    int move2 = (i + 2 < s.size() && s[i + 2] != '*') ? solve(i + 2, s, dp) : 0;

    return dp[i] = take + max(move1, move2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> dp(n, -1);
        cout << solve(0, s, dp) << endl;
    }
    return 0;
}
