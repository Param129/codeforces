#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        for(int i = 0; i < n; i++){
            cin >> b[i];
        }

        // Maps to store the maximum lengths of subarrays with the same values
        map<int, int> mp1, mp2;

        // Process array a
        for(int i = 0; i < n; ){
            int el = a[i];
            int cnt = 0;
            while(i < n && a[i] == el){
                cnt++;
                i++;
            }
            mp1[el] = max(mp1[el], cnt);
        }

        // Process array b
        for(int i = 0; i < n; ){
            int el = b[i];
            int cnt = 0;
            while(i < n && b[i] == el){
                cnt++;
                i++;
            }
            mp2[el] = max(mp2[el], cnt);
        }

        // Find the maximum length of subarrays consisting of equal values across both arrays
        int ans = 0;
        for(auto &it : mp1){
            int el = it.first;
            int cnt = it.second;
            if(mp2.find(el) != mp2.end()){
                ans = max(ans, cnt + mp2[el]);
            }
            else {
                ans = max(ans, cnt);
            }
        }

        for(auto &it : mp2){
            int el = it.first;
            int cnt = it.second;
            if(mp1.find(el) == mp1.end()){
                ans = max(ans, cnt);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
