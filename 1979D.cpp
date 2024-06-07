#include<bits/stdc++.h>
using namespace std;
 
int solve(){
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
 
    int p = -1, cnt = 1;
 
    for (int i = 1; i <= n; i++) {
        if (i == n || s[i - 1] != s[i]) {
            if (cnt != k) {
                p = i - 1;
                if (cnt > k)p -= k;
                break;
            }
            else cnt = 0;
        }
        cnt++;
    }
    if (p == -1)return n;
    if (p == n - 1)return -1;
 
 
    string a = s.substr(p + 1, n - p - 1);
    string b = s.substr(0, p + 1);
 
    int l = 0, r = b.size() - 1;
    while (l <= r) {
        swap(b[l], b[r]);
        l++; r--;
    }
 
    s = a + b;
 
    cnt = 1;
    for (int i = 1; i <= n; i++) {
        if (i == n || s[i - 1] != s[i]) {
            if (cnt != k)return -1;
            else cnt = 0;
        }
        cnt++;
    }
 
    return p + 1;
}
 
int main(){
   int t;
   cin>>t;
   while (t--){
        cout<<solve()<<'\n';
   }
}