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

        int ans=0;
        int dot=0;
        int cnt=0;
        bool f=false;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                dot++;
            }
        }
        
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' &&s[i+1]=='.' &&s[i+2]=='.'){
                dot=2;
            }
        }

        cout<<dot<<endl;
    }
return 0;
}