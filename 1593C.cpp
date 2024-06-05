#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;

        vector<long long>a(k);
        for(long long i=0;i<k;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        long long cat=0;
        long long cnt=0;
        for(long long i=k-1;i>=0;i--){
            long long mpos=a[i];
            long long dist=n-a[i];
            if(cat<mpos){
                cnt++;
            }
            else{
                break;
            }
            cat+=dist;
        }

        cout<<cnt<<endl;
    }
return 0;
}