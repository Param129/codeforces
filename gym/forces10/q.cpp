#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    // Find the maximum value in the array to size the dp and div arrays
    int maxVal = *max_element(a.begin(), a.end());
    
    vector<int> dp(1000001, 0);
    vector<int> div(1000001, 0);

    // Populate dp and div
    for (int i = 0; i < n; ++i) {
        int current = a[i];
        // Initialize dp[current] if it's the first time it's being used
       
            dp[current] = 1;
            div[current]=1;
        // Update dp values based on the divisors of a[i]
        for (int j = 2; j * j <= current; ++j) {
            if (current % j == 0) {
                // j is a divisor
                dp[current] = max(dp[current], div[j] + 1);
                // current / j is also a divisor
                if (j != current / j) {
                    dp[current] = max(dp[current], div[current / j] + 1);
                }
            }
        }

        // Update the div array for the current value
        for (int j = 2; j * j <= current; ++j) {
            if (current % j == 0) {
                div[j] = dp[current];
                if (j != current / j) {
                    div[current / j] = dp[current];
                }
            }
        }
    }

    // The result is the maximum value in dp array for elements present in a
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result = max(result, dp[a[i]]);
    }
    
    cout << result << endl;

    return 0;
}
