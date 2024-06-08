#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }


        int m=total/n;
        bool f=true;

        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]<m){
                int req=m-a[i];
                if(cnt>=req){
                    cnt-=req;
                }
                else{
                    f=false;
                    break;
                }
            }
            else{
                cnt+=a[i]-m;
            }
        }

        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}