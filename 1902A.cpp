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

        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                c0++;
            }
        }

        if(c0==0)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        

        
    }
return 0;
}