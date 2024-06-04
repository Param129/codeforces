#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,m;
        cin>>n>>m;

        string s;
        cin>>s;

        map<char,long long>mp;
        set<char>st;
        long long cnt=0;
        for(auto it:s){
            mp[it]++;
            st.insert(it);
        }

        for(auto it:mp){
            long long x=it.second;
            if(x<m){
                cnt+=m-x;
            }
        }

        for(auto it:mp){
            if(it.second<0){
                cnt+=(0-it.second);
            }
        }

        long long p=7-st.size();
        cnt+=m*p;

        cout<<cnt<<endl;
        
    }
return 0;
}