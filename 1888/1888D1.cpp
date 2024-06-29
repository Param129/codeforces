#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<long long>a(n),b(n);
        a[0]=1;
        for(long long i=1;i<n;i++){
            cin>>a[i];
        }

        for(long long i=0;i<n;i++){
            cin>>b[i];
        }

        vector<bool>v(n,false);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        long long i=0;
        long long j=0;


        long long cnt=0;
        while(j<n){
            if(a[i]<b[j]){
                i++;
                j++;
            }
            else{
                while(j<n && a[i]>=b[j]){
                    j++;
                    cnt++;
                }
                i++;
                j++;
            }
        }

        cout<<cnt<<endl;
    }
return 0;
}