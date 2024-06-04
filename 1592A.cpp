#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,h;
        cin>>n>>h;

        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());
       long long cnt=0;
       long long x=a[n-1]+a[n-2];
       long long rounds=h/x;
       cnt+=2*rounds;
       long long rem=h%x;
       if(rem==0){
        cnt+=0;
       }
       else if(rem<=a[n-1]){
        cnt+=1;
       }
       else{
        cnt+=2;
       }

       cout<<cnt<<endl;
    }
return 0;
}