#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int>v;
    string cur="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            v.push_back(stoi(cur));
            cur="";
        }else{
            cur+=s[i];
        }
    }
    v.push_back(stoi(cur));
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1){
            cout<<to_string(v[i]);
        }
        else{
            cout<<to_string(v[i])+"+";
        }
    }
return 0;
}