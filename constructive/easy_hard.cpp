#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool fl=false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        if(x==1){
            fl=true;
            break;
        }
    }

    if(fl)cout<<"HARD"<<endl;
    else cout<<"EASY";
return 0;
}