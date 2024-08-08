#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> pre(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i - 1];
        }

        long long ans = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                long long min_sum = LLONG_MAX, max_sum = LLONG_MIN;
                for (int j = i; j <= n; j += i) {
                    long long sum = pre[j] - pre[j - i];
                    min_sum = min(min_sum, sum);
                    max_sum = max(max_sum, sum);
                }
                ans = max(ans, max_sum - min_sum);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
