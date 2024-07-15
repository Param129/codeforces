#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    unordered_set<char>st;
    for(int i=0;i<5;i++){
        string x;
        cin>>x;

        st.insert(x[0]);
        st.insert(x[1]);
    }

    if(st.count(s[0]) || st.count(s[1])){
        cout<<"YES";
    }
    else cout<<"NO";

return 0;
}