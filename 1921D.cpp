#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;

        vector<long long>a(n),b(m);

        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        for(long long j=0;j<m;j++){
            cin>>b[j];
        }

        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        long long i=0;
        long long x=0;
        long long j=n-1;
        long long y=m-1;

        long long ans=0;
        while(i<=j){
            long long d1=abs(a[i]-b[x]);
            long long d2=abs(b[y]-a[j]);

            if(d1>=d2){
                ans+=d1;
                i++;
                x++;
            }
            else{
                ans+=d2;
                j--;
                y--;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}