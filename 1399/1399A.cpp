#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>0 && abs(a[i+1]-a[i]<=1)){
                a[i]=0-a[i];
                cnt++;
            }
        }

        if(cnt==n-1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}