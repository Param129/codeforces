#include <bits/stdc++.h>
using namespace std;

// Function to perform DFS to count adjacent little pigs


int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<char>> v(n, vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    int ans=0;

    int dir[4][4]={{0,1},{1,0},{0,-1},{-1,0}};

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='W'){
                for(int k=0;k<4;k++){
                    int nr=i+dir[k][0];
                    int nc=j+dir[k][1];

                    if(nr>=0 && nr<n && nc>=0 && nc<m && v[nr][nc]=='P'){
                        ans++;
                        v[nr][nc]='.';
                        break;
                    }
                }
            }
        }
    }

    cout<<ans<<endl;
    return 0;
}
