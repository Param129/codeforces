#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int>ne(v.begin(),v.end());
        int x=v[f-1];
        ne[f]=-1;
        for(int i=0;i<n;i++){
            if(ne[i]==x){
                ne[i]=-1;
            }
        }

        int fre=0;
        for(int i=1;i<=n;i++){
            if(v[i]==x){
                fre++;
            }
        }

        sort(v.begin(),v.end(),greater<int>());
        // for(int i=1;i<=n;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;

        // cout<<x<<endl;
        // int cnt=0;
        // while(k--){
        //     int el=v.back();
        //     // cout<<el<<" ";
        //     if(el==x){
        //         cnt++;
        //         fre--;
        //     }
        //     v.pop_back();
        // }

        // // cout<<cnt;

        // if(cnt==0){
        //     cout<<"NO"<<endl;

        // }
        // else if(cnt==1 && fre==0){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"MAYBE"<<endl;
        // }

        if(x == v[k-1]){
            if(k==n || v[k]!=x){
            cout<<"YES"<<endl;
            }
            else{
                cout<<"MAYBE"<<endl;
            }
        }
        else if(x>v[k-1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}