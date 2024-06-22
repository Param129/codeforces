#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

const int MOD = 998244353;

// Function to check if a string is a palindrome
bool is_palindrome(const string& s) {
    int len = s.size();
    for (int i = 0; i < len / 2; ++i) {
        if (s[i] != s[len - i - 1]) {
            return false;
        }
    }
    return true;
}

// Function to count good strings
int count_good_strings(const string& S, int K) {
    int N = S.size();
    int q = count(S.begin(), S.end(), '?');
    
    // dp array of maps to keep track of masks
    vector<map<string, int>> dp(N);
    
    if (S[0] == '?') {
        dp[0]["A"] = 1;
        dp[0]["B"] = 1;
    } else {
        dp[0][string(1, S[0])] = 1;
    }
    
    for (int i = 1; i < N; ++i) {
        for (const auto& [previous, count] : dp[i - 1]) {
            for (char ch : {'A', 'B'}) {
                if (S[i] == '?' || S[i] == ch) {
                    string new_mask = previous + ch;
                    if (new_mask.size() >= K) {
                        if (is_palindrome(new_mask.substr(new_mask.size() - K, K))) {
                            continue;
                        }
                    }
                    new_mask = new_mask.substr(max(0, (int)new_mask.size() - (K - 1)));
                    if (dp[i].find(new_mask) == dp[i].end()) {
                        dp[i][new_mask] = 0;
                    }
                    dp[i][new_mask] = (dp[i][new_mask] + count) % MOD;
                }
            }
        }
    }
    
    int result = 0;
    for (const auto& [mask, value] : dp[N - 1]) {
        result = (result + value) % MOD;
    }
    
    return result;
}

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    cout << count_good_strings(S, K) << endl;
    return 0;
}
