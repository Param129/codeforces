#include<bits/stdc++.h>
using namespace std;

void dfs(int i,int j,vector<vector<char>>&v,string &ans,string cur,vector<vector<bool>>&vis){
    if(cur.size()==3){
        ans=min(ans,cur);
        return;
    }
    if(i==3 || j==3 || i<0 || j<0 || vis[i][j]==true )return;
    if(v[i][j]=='@')return;

    vis[i][j]=true;
    cur+=v[i][j];
    dfs(i+1,j,v,ans,cur,vis);
    dfs(i-1,j,v,ans,cur,vis);
    dfs(i,j+1,v,ans,cur,vis);
    dfs(i,j-1,v,ans,cur,vis);
    dfs(i+1,j+1,v,ans,cur,vis);
    dfs(i+1,j-1,v,ans,cur,vis);
    dfs(i-1,j-1,v,ans,cur,vis);
    dfs(i-1,j+1,v,ans,cur,vis);

    vis[i][j]=false;
    cur.pop_back();
}

int main(){
    vector<vector<char>>v(3,vector<char>(3));
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
       for(int j=0;j<3;j++){
        v[i][j]=s[j];
       }
    }

    string ans="CCC";
    string cur="";
    vector<vector<bool>>vis(3,vector<bool>(3,false));
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            dfs(i,j,v,ans,"",vis);
        }
     }

     cout<<ans<<endl;
return 0;
}