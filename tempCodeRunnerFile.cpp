#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        int prev=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                prev++;
            }
            else{
                if(prev>0)ans+=prev+1;
            }
        }

        cout<<ans<<endl;
    }
return 0;
}