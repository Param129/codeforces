#include <bits/stdc++.h>
using namespace std;

long long solve(long long i, vector<vector<long long>>& v, long long x, long long remain, vector<vector<long long>>& dp) {
    if (i == v.size()-1){
        if(remain>=v[i][0])return v[i][1];
        else return 0;
    }
    if (dp[i][remain] != -1) return dp[i][remain]; // Return memoized result

    long long inc = 0;
    long long exc = 0;

    // Option 1: Skip the current month's opportunity and add earnings
    exc = solve(i + 1, v, x, remain + x, dp);

    // Option 2: Take the current month's opportunity if enough money
    if (remain >= v[i][0]) {
        inc = v[i][1] + solve(i + 1, v, x, remain - v[i][0] + x, dp);
    }

    // Memoize and return the maximum of both options
    return dp[i][remain] = max(inc, exc);
}

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long m, x;
        cin >> m >> x;  

        long long cnt=0;

        vector<vector<long long>> v(m, vector<long long>(2));
        for (long long i = 0; i < m; i++) {
            cin >> v[i][0] >> v[i][1]; // Reading cost and happiness
            cnt+=v[i][1];
        }

        // Use a large enough second dimension for dp array
        vector<vector<long long>> dp(m*1, vector<long long>(m * x + 1, -1));

        long long ans = solve(0, v, x, 0, dp); // Start solving from month 0 with initial money 0
        cout << ans << endl;
    }
    return 0;
}