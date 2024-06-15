#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> f(10);
    for(int i = 1; i <= 9; i++){
        cin >> f[i]; // read the transformation function
    }

    bool started = false; // flag to indicate if the transformation has started
    for(int i = 0; i < n; i++){
        int digit = s[i] - '0';
        if(f[digit] > digit) {
            s[i] = f[digit] + '0';
            started = true;
        } else if(started && f[digit] < digit) {
            break;
        }
    }

    cout << s << endl;
    return 0;
}
