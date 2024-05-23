#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        unordered_set<char>st;
        for(auto it:s){
            st.insert(it);
        }

        if(st.size()==1)cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=1;i<s.size();i++){
                if(s[i]!=s[i-1]){
                    swap(s[i],s[i-1]);
                    break;
                }
            }
            cout<<s<<endl;
        }

    }
return 0;
}