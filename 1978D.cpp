#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;

        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        a[0]=a[0]+c;

        vector<long long>ans(n,0);

        // long long j=-1;
        // long long mx=0;
        // for(long long i=0;i<n;i++){
        //     if(a[i]>mx){
        //         mx=a[i];
        //         j=i;
        //     }
        // }
         int j = max_element(a.begin(),a.end()) - a.begin();

        for(long long i=j+1;i<n;i++){
            ans[i]=i;
        }

        if(j!=0)ans[0]=1;

        long long sum=a[0];
        for(long long i=1;i<j;i++){
            sum+=a[i];
            if(sum>=a[j])ans[i]=i;
            else ans[i]=i+1;
        }

        for(long long i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}