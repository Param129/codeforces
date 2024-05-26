#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);

        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        vector<int>a(v.begin(),v.end());
        sort(a.begin(),a.end());

        if(a==v)cout<<"YES"<<endl;
        else if(a!=v && k<=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
return 0;
}