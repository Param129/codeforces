#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n+1,0);
        vector<int>b(n+1);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int j=0;j<n+1;j++){
            cin>>b[j];
        }

        int el=0;
        int x=b[n];
        int mn=INT_MAX;

        for(int i=0;i<n;i++){
            if(abs(x-a[i])<mn){
                mn=abs(x-a[i]);
                el=a[i];
            }
        }

        a[n]=el;
        cout<<el;
        int ans=0;
        for(int i=0;i<n+1;i++){
            ans+=abs(a[i]-b[i]);
        }
        // cout<<ans<<endl;
    }
return 0;
}