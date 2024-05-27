#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<pair<int, pair<int, char>>> v;
    int balance = 0;

    // Calculate prefix balance and store characters with their positions
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '(') balance++;
        else balance--;

        v.push_back({balance, {i, s[i]}});
    }

    // Sort the characters based on prefix balance and position
    sort(v.begin(), v.end());

    string ans = "";

    // Construct the balanced shuffle sequence
    for(auto p : v) {
        ans += p.second.second;
    }

    cout << ans;
    return 0;
}
