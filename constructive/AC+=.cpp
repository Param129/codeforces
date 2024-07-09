#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;

        int op=0;

        int mx=max(a,b);

        while(mx<=n){
            if(mx==b){
                a=a+b;
                mx=a;
            }
            else{
                b=a+b;
                mx=b;
            }
            op++;
        }
        cout<<op<<endl;
    }
return 0;
}