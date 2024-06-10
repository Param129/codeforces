#include<bits/stdc++.h>
using namespace std;

bool dec(string s) {
    int i = 0;
    int j = s.size() - 1;
    while(i <= j) {
        if(s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

bool bin(int n) {
    string binary;
    while(n) {
        binary += (n % 2) + '0';
        n /= 2;
    }
    int a = 0;
    int b = binary.size() - 1;
    while(a <= b) {
        if(binary[a] != binary[b]) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

bool hex(int n) {
    string hexadecimal;
    while(n) {
        int dig = n % 16;
        if(dig < 10) {
            hexadecimal += dig + '0';
        } else {
            hexadecimal += dig - 10 + 'A';
        }
        n /= 16;
    }
    int a = 0;
    int b = hexadecimal.size() - 1;
    while(a <= b) {
        if(hexadecimal[a] != hexadecimal[b]) {
            return false;
        }
        a++;
        b--;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        string s = to_string(n);

        int cnt = 0;

        if(bin(n)) cnt++;
        if(hex(n)) cnt++;
        if(dec(s)) cnt++;

        if(cnt >= 2) cout << "ghavi" << endl;
        else cout << "fanni khordim" << endl;
    }
    return 0;
}
