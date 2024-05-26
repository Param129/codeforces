#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }

        int mn=INT_MIN;
        mn=max(mn,v[0]-0);
        mn=max(mn,(x-v[n-1])*2);
    
        for(int i=0;i<n-1;i++){
            
            mn=max(mn,v[i+1]-v[i]);
        }

        cout<<mn<<endl;
    }
return 0;
}