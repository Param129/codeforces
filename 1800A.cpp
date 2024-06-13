#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st = {'m', 'M', 'e', 'E', 'o', 'O', 'w', 'W'};
        bool validChars = true;

        for (char c : s) {
            if (st.find(c) == st.end()) {
                validChars = false;
                break;
            }
        }

        if (!validChars) {
            cout << "NO" << endl;
            continue;
        }

        bool isMeowing = true;
        int i = 0;

        // Check sequence of 'm' or 'M'
        if (i < n && (s[i] == 'm' || s[i] == 'M')) {
            while (i < n && (s[i] == 'm' || s[i] == 'M')) {
                i++;
            }
        } else {
            isMeowing = false;
        }

        // Check sequence of 'e' or 'E'
        if (isMeowing && i < n && (s[i] == 'e' || s[i] == 'E')) {
            while (i < n && (s[i] == 'e' || s[i] == 'E')) {
                i++;
            }
        } else {
            isMeowing = false;
        }

        // Check sequence of 'o' or 'O'
        if (isMeowing && i < n && (s[i] == 'o' || s[i] == 'O')) {
            while (i < n && (s[i] == 'o' || s[i] == 'O')) {
                i++;
            }
        } else {
            isMeowing = false;
        }

        // Check sequence of 'w' or 'W'
        if (isMeowing && i < n && (s[i] == 'w' || s[i] == 'W')) {
            while (i < n && (s[i] == 'w' || s[i] == 'W')) {
                i++;
            }
        } else {
            isMeowing = false;
        }

        // After checking all characters, i should be at the end of the string
        if (isMeowing && i == n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
