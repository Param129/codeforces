#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }

    if(sum%2!=0){
        cout<<0<<endl;
    }
    else{
        int target=sum/2;
    int ans=0;
    int cur=0;
    for(int i=0;i<n-1;i++){
        cur+=v[i];
        if(cur==target){
            ans++;
        }
    }

    cout<<ans<<endl;
    }

return 0;
}