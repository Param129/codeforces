#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        vector<int> pre(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i - 1];
        }

        int ans = INT_MIN;
        for(int i=n;i>=0;i--){
            int maxrem = n-i;
            if(maxrem>k){
                break;
            }

            int upto=min(x,i);
            int sum=(pre[i-upto]-(pre[i]-pre[i-upto]));
            ans=max(ans,sum);
        }

        cout<<ans<<endl;
    }
return 0;
}