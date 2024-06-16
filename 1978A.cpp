#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        unordered_set<int>st(a.begin(),a.end());
        vector<int>v(st.begin(),st.end());

            int mx=0;
        int ans=a[n-1];
        for(int i=0;i<n-1;i++){
            mx=max(mx,a[i]);
        }
        cout<<ans+mx<<endl;
    }
return 0;
}