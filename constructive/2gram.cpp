#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    unordered_map<string,int>mp;
    for(int i=0;i<n-1;i++){
        string cur=s.substr(i,2);
        mp[cur]++;
    }

    string ans="";
    int mx=0;
    for(auto it:mp){
        if(it.second>mx){
            mx=it.second;
            ans=it.first;
        }
    }

    cout<<ans;
return 0;
}