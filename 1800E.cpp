#include<bits/stdc++.h>
using namespace std;

bool solve(int i,int j,string s,string t,vector<vector<int>>&dp,int k){
    if(i==s.size()&& j==t.size()){
        return 1;
    }

    if(dp[i][j]!=-1)return dp[i][j];

    int three=0;
    int four=0;
    if(s[i]==t[j]){
         solve(i+1,j+1,s,t,dp,k);
    }
    else{
        if(t[j]==s[i+k]){
            swap(s[i],s[i+k]);
        }
        else{
            swap(s[i],s[i+k+1]);
        }
        solve(i+1,j+1,s,t,dp,k);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s,t;
        cin>>s>>t;

        vector<vector<int>dp(n,vector<int>(n,-1));
        if(solve(0,0,s,t,dp)==true){
            cout<<"YES"<<endl
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}