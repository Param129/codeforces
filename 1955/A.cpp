#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;

        int ans=INT_MAX;

        if(n%2==0){
            ans=min(ans,n*a);
            ans=min(ans,b*(n/2));
        }
        else{
            ans=min(ans,n*a);
            n=n-1;
            ans=min(ans,(b*(n/2)+a));
        }

        cout<<ans<<endl;
    }
return 0;
}