#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<int,int>mp;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]=i+1;
    }

    int cnt=1;
    for(auto it:mp){
        cout<<mp[cnt]<<" ";
        cnt++;
    }
return 0;
}