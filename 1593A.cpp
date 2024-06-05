#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int x,y,z;
        int one=max(b,c);
        x=max(0,one-a+1);

        int two=max(a,c);
        y=max(0,two-b+1);

        int three=max(b,a);
        z=max(0,three-c+1);

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
return 0;
}