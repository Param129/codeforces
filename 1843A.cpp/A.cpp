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

        int ans=0;
        sort(a.begin(),a.end());
        int i=0;
        int j=n-1;
        while(i<j){
            ans+=a[j]-a[i];
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
return 0;
}   