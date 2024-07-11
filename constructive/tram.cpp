#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int ans=0;
    int cur=0;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;

        cur-=a;
        cur+=b;
        ans=max(ans,cur);

    }
    cout<<ans<<endl;
return 0;
}