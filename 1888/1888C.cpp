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

        set<long long>first;
        set<long long>last;
        set<long long>st;
        map<long long,long long>mp;

        for(long long i=0;i<n;i++){
            if(st.count(a[i])==0){
                first.insert(i);
            }
            st.insert(a[i]);
            mp[a[i]]=i;
        }

        for(auto it:mp){
            last.insert(it.second);
        }

        long long ans=0;
        long long cnt=0;

        for(long long i=n-1;i>=0;i--){
            if(last.count(i))cnt++;
            if(first.count(i))ans+=cnt;
        }
        cout<<ans<<endl;
    }
return 0;
}