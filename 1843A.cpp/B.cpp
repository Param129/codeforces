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

        long long sum=0;
        for(long long i=0;i<n;i++){
            if(a[i]<0){
                sum+=0-a[i];
            }
            else{
                sum+=a[i];
            }
        }

        long long cnt=0;
        long long i=0;
        while(i<n){
            if(a[i]<0){
                cnt++;
                while(i<n && a[i]<=0)i++;
            }
            else{
                i++;
            }
        }

        cout<<sum << " " <<cnt<<endl;
    }
return 0;
}