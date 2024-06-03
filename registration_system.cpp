#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        string s=v[i];
        if(mp.find(s)!=mp.end()){
            cout<<s+to_string(mp[s])<<endl;
        }
        else{
            cout<<"OK"<<endl;
        }
        mp[s]++;
    }
return 0;
}