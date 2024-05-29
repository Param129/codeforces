#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<pair<long long,long long>>v;

        
        for(long long i=0;i<n;i++){
            long long a,x;
            cin>>a>>x;
            v.push_back({a,x});
        }

        long long l=INT_MIN;
        long long h=INT_MAX;
        unordered_map<long long,long long>mp;
        
        for(long long i=0;i<n;i++){
            long long a=v[i].first;
            long long x=v[i].second;
            if(a==1){
                l=max(l,x);
            }
            else if(a==2){
                h=min(h,x);
            }
            else if(a==3){
                mp[x]++;
            }
        }

        if(l>h)cout<<0<<endl;
        else{
           cout<<h-l-mp.size()+2<<endl;
        }
    }
return 0;
}