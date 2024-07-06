#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int pair=0;
        int single=0;

        unordered_map<char,int>mp;
        if(n==k)cout<<1<<endl;
        else{
            for(auto it:s){
                mp[it]++;
            }

            for(auto it:mp){
                if(it.second%2!=0){
                    single++;
                }
                pair+=it.second/2;
            }

            int len=pair/k;
            single+=(pair%k)*2;

            len*=2;
            if(single>=k){
                len++;
            }

            cout<<len<<endl;
        }
    }
return 0;
}