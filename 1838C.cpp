#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        
        vector<vector<int>>a(n,vector<int>(m,0));
        int c=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a[i][j]=c;
                c++;
            }
        }

        for(int i=1;i<n;i+=2){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int i=0;i<n;i+=2){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}