#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>adj;
vector<int>vis;
bool cycle;

void dfs(int i){
    vis[i]=1;
    if(adj[i].size()!=2){
        cycle=false;
    }
    for(auto it :adj[i]){
        if(!vis[it]){
            dfs(it);
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    adj.resize(n+1);
    vis.resize(n+1,0);

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            cycle=true;
            dfs(i);
            if(cycle)cnt++;
        }
        
    }

    cout<<cnt<<endl;
return 0;
}