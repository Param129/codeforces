#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<char>r;
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }

        for(auto it:mp){
           r.push_back(it.first);
        }

        sort(r.begin(),r.end());
     
        // cout<<endl;
        string ans="";
        unordered_map<char,char>mp1;
        int j=r.size()-1;
        for(int i=0;i<r.size();i++){
            mp1[r[i]]=r[j];
            mp1[r[j]]=r[i];
            j--;
        }


        for(auto it:s){
            ans+=mp1[it];
        }
        cout<<ans<<endl;
    }
return 0;
}