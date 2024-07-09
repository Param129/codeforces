#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
    cin>>n;

    unordered_map<int,int>mp;

    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }

    int cnt1=0;
    int cnt2=0;
    for(auto it:mp){
        int x=it.second;
        
        if(it.second==2){
            cnt1++;
        }
        else{
            cnt2++;
        }
    }

    cout<<cnt1<<endl;
    }

return 0;
}