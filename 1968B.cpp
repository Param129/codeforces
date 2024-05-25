#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;

        int i=0;
        int j=0;

        int ans=0;
        while(i<n && j<m){
            if(s1[i]==s2[j]){
                i++;
                j++;
            }
            else{
                j++;
            }
        }

        cout<<i<<endl;
    }
return 0;
}