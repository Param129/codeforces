#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        int ans=0;
        
        int mx=0;
        for(int i=1;i<x;i++){
            if(mx< __gcd(x,i)+i){
                mx=max(mx,__gcd(x,i)+i);
                ans=i;
            }
        }

        cout<<ans<<endl;
    }
return 0;
}