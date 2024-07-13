#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cin >> n;

    map<int,int>mp;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }


    int cur=1;
    int ans=0;

    for(auto it:mp){
        int x=it.second;
        int cur=it.first;
        while(it.second>1){
            while(mp.find(cur)!=mp.end()){
                cur++;
            }

            mp[cur]++;
            ans+=cur-it.first;
            it.second--;
        }
    }
    cout<<ans;
    return 0;
}
