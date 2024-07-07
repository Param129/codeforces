#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    string s = to_string(n);
    int len = s.length();
    
    for (int i = 0; i < len; i++) {
        int digit = s[i] - '0';
        
        // Invert the digit if it's greater than 4
        if (digit > 4) {
            // Special condition: leading digit should not become zero unless it's 9
            if (i == 0 && digit == 9) {
                continue;
            } else {
                s[i] = (9 - digit) + '0';
            }
        }
    }

    cout << s << endl;
    return 0;
}
