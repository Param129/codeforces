#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        long long n=s.size();
        long long prev=0;
        long long ans=0;
        for(long long i=0;i<n;i++){
            if(s[i]=='1'){
                prev++;
            }
            else{
                if(prev>0)ans+=(prev+1);
            }
        }

        cout<<ans<<endl;
    }
return 0;
}