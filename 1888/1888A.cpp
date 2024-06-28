#include<bits/stdc++.h>
using namespace std;

bool check(unordered_map<char, int>& mp, int k) {
    int odd = 0;
    for (auto it : mp) {
        if (it.second % 2 != 0) odd++;
    }

    // If there are more than k odd frequencies, we cannot form a palindrome
    if (odd -k>1) return false;

    else return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        bool ans = check(mp, k);
        if (ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
