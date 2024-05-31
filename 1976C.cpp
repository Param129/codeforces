#include <iostream>
#include <vector>
using namespace std;

void dummyFunction(vector<long long int>& a, vector<long long int>& b) {
    long long sum = 0;
    for (size_t i = 0; i < a.size(); ++i) {
        sum += a[i] + b[i];
    }
    // cout << "Dummy function sum: " << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t;
    cin >> t;
    while (t--) {
        long long int n, m;
        cin >> n >> m;
        vector<long long int> a(n + m + 1), b(n + m + 1);
        
        // Input values into vectors
        for (long long int i = 0; i < n + m + 1; ++i) {
            cin >> a[i];
        }
        for (long long int i = 0; i < n + m + 1; ++i) {
            cin >> b[i];
        }

        // Call dummy function
        dummyFunction(a, b);

        // First pass: prioritizing programming skills
        long long int prog = 0, test = 0;
        long long int skill1 = 0;
        vector<long long int> v(n + m + 1);

        for (long long int i = 0; i < n + m + 1; ++i) {
            if (a[i] > b[i] && prog < n) {
                skill1 += a[i];
                prog++;
                v[i] = 1;
            } else if (test < m) {
                skill1 += b[i];
                test++;
                v[i] = 0;
            } else {
                skill1 += a[i];
                prog++;
                v[i] = 1;
            }
        }

        // Second pass: prioritizing testing skills
        prog = 0;
        test = 0;
        long long skill2 = 0;
        vector<long long int> v2(n + m + 1);

        for (long long int i = 0; i < n + m + 1; ++i) {
            if (b[i] >a[i] && test < m) {
                skill2 += b[i];
                test++;
                v2[i] = 0;
            } else if (prog < n) {
                skill2 += a[i];
                prog++;
                v2[i] = 0;
            } else {
                skill2 += b[i];
                test++;
                v2[i] = 0;
            }
        }

        vector<long long int> ans(n + m + 1, 0);
        // Calculate the answer for each candidate
        for (long long int i = 0; i < n + m + 1; ++i) {
            if (v[i] == 1) {
                ans[i] += skill1 - a[i];
            } else {
                ans[i] += skill2 - b[i];
            }
        }

        // Print the answers
        for (long long int i = 0; i < n + m + 1; ++i) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
