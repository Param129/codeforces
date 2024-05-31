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

        map<long long,long long>mp;
        for(auto it:a){
            mp[it]++;
        }

        long long small=0;
        long long ans=0;
        for(auto it:mp){
            ans+=((it.second)*(it.second-1)*(it.second-2))/6;
            ans+=((it.second)*(it.second-1)/2)*small;
            small+=mp[it.first];
        }

        cout<<ans<<endl;
    }
return 0;
}