#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0;
        int y = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == 'E') x++;
            else if(s[i] == 'W') x--;
            else if(s[i] == 'N') y++;
            else if(s[i] == 'S') y--;
        }

        // Check for invalid conditions
        if(x % 2 != 0 || y % 2 != 0){
            cout << "NO" << endl;
        }
        else if(n == 2 && s[0] != s[1]){
            cout << "NO" << endl;
        }
        else{
            string ans = "";
            int n_count = 0, s_count = 0, e_count = 1, w_count = 1; // Counters for helicopters' changes
            char ch[2] = {'R', 'H'};

            for(int i = 0; i < n; i++){
                if(s[i] == 'N'){
                    ans += ch[n_count];
                    n_count = 1 - n_count;
                }
                else if(s[i] == 'S'){
                    ans += ch[s_count];
                    s_count = 1 - s_count;
                }
                else if(s[i] == 'E'){
                    ans += ch[e_count];
                    e_count = 1 - e_count;
                }
                else if(s[i] == 'W'){
                    ans += ch[w_count];
                    w_count = 1 - w_count;
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}
