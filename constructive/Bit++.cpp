#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int x=0;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        bool p=false;

        for(int i=0;i<3;i++){
            if(s[i]=='+'){
                p=true;
                x++;
                break;
            }
        }

        if(!p){
            x--;
        }


       
    }

     cout<<x<<endl;
return 0;
}