#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;

        int c1=0;
        int c2=0;

        for(int i=0;i<n;i++){
            if(s1[i]=='1')c1++;
            if(s2[i]=='1')c2++;
        }

        int op=c1-c2>0?c1-c2:0;

        int replace=0;
        int insert=0;
        for(int i=0;i<n;i++){
            if(s2[i]=='0' && s1[i]=='1')rep++;
            else if(s1[i]=='0' && s2[i]=='1')insert++;
        }
        cout<<op+insert-replace<<endl;
    }
return 0;
}