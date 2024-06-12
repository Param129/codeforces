#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int c1=0;
        int c2=0;

        c1=s[0]+s[1]+s[2];
        c2=s[3]+s[4]+s[5];

        if(c1==c2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}