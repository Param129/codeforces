#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>s(n);

        for(int i=0;i<n;i++){
            cin>>s[i];
        }

        if(n%2!=0)cout<<-1<<endl;
        else{
            vector<vector<int>>ans;
            for(int i=0;i<n-1;i+=2){
                if(s[i]==1 && s[i+1]==1){
                    ans.push_back({i+1,i+2});
                }
                else if(s[i]==1 && s[i+1]==-1){
                    ans.push_back({i+1,i+1});
                    ans.push_back({i+2,i+2});
                }
                else if(s[i]==-1 && s[i+1]==-1){
                    ans.push_back({i+1,i+2});
                }else if (s[i]==-1 && s[i+1]==1){
                    ans.push_back({i+1,i+1});
                    ans.push_back({i+2,i+2});
                }
            }

            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++){
                for(int j=0;j<ans[i].size();j++){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
return 0;
}