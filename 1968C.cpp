#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int>v(n-1);
        vector<int>a(n);

        for(int i=0;i<n-1;i++){
            cin>>v[i];
        }

        a[0]=1000000;
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+v[i-1];
        }

        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}