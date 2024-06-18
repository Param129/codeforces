#include<bits/stdc++.h>
using namespace std;

bool isbalanced(string s){
    stack<char>st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        string t=s;
        reverse(t.begin(),t.end());

        int open=0,close=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                close++;
            }
        }

        if(open!=close){
            cout<<-1<<endl;
        }
        else if(isbalanced(s) || isbalanced(t)){
            cout<<1<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }

        else{
            vector<int>v;
            vector<int>ans(n,0);
            cout<<2<<endl;
            for(int i=0;i<n;i++){
                if(s[i]=='('){
                    v.push_back(i);
                }
                else{
                    if(v.size()>0){
                        int c=v.back();
                        v.pop_back();
                        ans[i]=1;
                        ans[c]=1;
                    }
                }
            }

            for(int i=0;i<n;i++){
                if(ans[i]==0)ans[i]=2;
            }

            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }

    }
return 0;
}