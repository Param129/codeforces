#include <bits/stdc++.h>
#define int long long

using namespace std;

#undef int
int main() 
{
    #define int long long
    std::ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, current_sum = 0;
    string s, temp = "";
    cin >> n >> s;

    for (char ch : s)
        if (ch != '0')
            temp += ch;

    s = temp;
    if (s.empty()) {
        cout << "YES\n";
        return 0;
    }
    n = s.size();
    for (int i = 0;i + 1 < n;i++) {

        current_sum += s[i] - '0';
        int remaining_sum = 0;
        for (int j = i + 1;j < n;j++) {

            remaining_sum += s[j] - '0';
            if (remaining_sum == current_sum) 
                remaining_sum = 0;
        }
        if(remaining_sum == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}