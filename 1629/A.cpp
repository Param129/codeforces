#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i]});
        }

        sort(v.begin(),v.end());

        for(int i=0;i<n;i++){
            if(v[i].first<=k){
                k+=v[i].second;
            }
            else{
                break;
            }
        }
        cout<<k<<endl;
    }
return 0;
}