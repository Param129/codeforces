#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int one=0;
        int two=0;

        one=abs(a-1);
        two=abs(b-c)+abs(c-1);

        if(one<two)cout<<1<<endl;
        else if(one==two)cout<<3<<endl;
        else cout<<2<<endl;
    }
return 0;
}