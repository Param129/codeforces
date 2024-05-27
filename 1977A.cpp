#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        // if(n<m)cout<<"NO"<<endl;
        int x=n-m;
        if(n>=m && x%2==0)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}