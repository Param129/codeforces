#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        long long m=(n-1)/2;

        long long cnt=0;

        for(long long i=m;i<n;i++){
            if(a[m]==a[i]){
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
return 0;
}