#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        
        vector<int>a(n),h(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>h[i];
        }

        int j=0;
        int cnt=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(i==0 || h[i-1]%h[i]==0){
                cnt+=a[i];
            }
            else{
                cnt=a[i];
                j=i;
            }
            while(cnt>k){
                cnt-=a[j];
                 j++;
            }

            ans=max(ans,i-j+1);
        }

        cout<<ans<<endl;
    }
return 0;
}