#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string a,b,c;
        cin>>a>>b>>c;

        bool fl=false;

        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && a[i]==b[i]){
                fl=true;
            }
            else if(a[i]!=b[i] && b[i]!=c[i] && a[i]!=c[i]){
                fl=true;
            }
        }

        if(fl)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}