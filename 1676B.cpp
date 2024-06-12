#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        long long mn=INT_MAX;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
        }

        long long cnt=0;
        for(long long i=0;i<n;i++){
            if(a[i]-mn>0){
                cnt+=a[i]-mn;
            }
        }

        cout<<cnt<<endl;
    }
return 0;
}