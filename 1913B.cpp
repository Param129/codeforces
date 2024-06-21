#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int zero=0;
        int one=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')zero++;
            else one++;
        }

        int cnt=0;
        int i=0;
        int ans=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='0'){
                if(one>0){
                    one--;
                }
                else {
                    ans=n-i;
                    break;}
            }
            else{
                if(zero>0){
                    zero--;
                }
                else{
                    ans=n-i;
                    break;
                }
            }
            i++;
        }

        cout<<ans<<endl;
    }
return 0;
}