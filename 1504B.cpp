#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;

        vector<pair<int,int>>v;
        int one=0,zero=0;

        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]=='1')one++;
            else{
                zero++;
            }

            if(one==zero){
                v.push_back({j,i});
                j=i+1;
            }
        }

        for(auto it:v){
            int st=it.first;
            int end=it.second;
            if(a[st]==b[st])continue;
            else{
                for(int i=st;i<=end;i++){
                    if(a[i]=='1')a[i]='0';
                    else{
                        a[i]='1';
                    }
                }
            }
        }

        if(a==b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}