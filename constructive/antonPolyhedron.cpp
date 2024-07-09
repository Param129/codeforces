#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=0;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(s=="Dodecahedron"){
            ans+=12;
        }
        else if(s=="Icosahedron"){
            ans+=20;
        }
        else if(s=="Cube"){
            ans+=6;
        }
        else if(s=="Tetrahedron"){
            ans+=4;
        }
        else{
            ans+=8;
        }

       
    }
     cout<<ans<<endl;
return 0;
}