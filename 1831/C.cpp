#include <iostream>
#include <vector>
using namespace std;

int ans;

void dfs(int i, vector<vector<pair<int,int>>>& adj,int par,int it,int idx) {
    ans=max(ans,it);
    for(auto & [nb,id]:adj[i]){
        if(nb==par)continue;
        dfs(nb,adj,i,it+(id<idx),id);
    }
}



int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        ans=0;

        vector<vector<pair<int,int>>> adj(n);
        for (int i = 0; i < n - 1; i++) {
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            adj[a].push_back({b,i});
            adj[b].push_back({a,i});
        }

        dfs(0,adj,-1,1,-1);

        cout << ans  << endl; 
    }

    return 0;
}
