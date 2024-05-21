#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        int ans=0;
        int cnt=0;
        int empty=0;

       while(x>0 || y>0){
            if(y>=2){
                y=y-2;
                ans++;
                x=x-7;
            }
            else if(y==1){
                ans++;
                y=y-1;
                x=x-11;
            }
            else{
                x=x-15;
                ans++;
            }
       }

        cout<<ans<<endl;
    }
return 0;
}