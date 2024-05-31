#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>a(n),b(m);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int j=0;j<m;j++){
            cin>>b[j];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        vector<int>c(a);

        int j=m-1;
        for(int i=0;i<=n/2;i++){
            c[i]=b[j];
            j--;
        }

        j=0;
        for(int i=n;i>n/2;i--){
            c[i]=b[j];
            j++;
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(a[i]-c[i]);
        }

        cout<<ans<<endl;
    }
return 0;
}