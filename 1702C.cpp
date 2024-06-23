#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
       int n,q;cin>>n>>q;
    map<int,vector<int>> mp;
    map<int,int>mpp;
    int arr[n];
    int mx=0,mn=1000000000;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
        mx=max(mx,arr[i]);
        mn=min(mn,arr[i]);
        mp[arr[i]].push_back(i+1);
    }
    while(q--){
        int x,y;cin>>x>>y;
        if(mpp[x]==0 || mpp[y]==0 || mp[x][0]>mp[y][mp[y].size()-1]) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

}