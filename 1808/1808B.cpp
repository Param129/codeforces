#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
        }

        if(n<=1){
            cout<<0<<continue;
        }

        int ans=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;)
        }

    }
return 0;
}