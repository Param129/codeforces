#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int mx=*max_element(a.begin(),a.end());
    int mn=*min_element(a.begin(),a.end());

    int l,h;
    for(int i=0;i<n;i++){
        if(a[i]==mx){
            l=i+1;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(a[i]==mn){
            h=i+1;
            break;
        }
    }

    if(l>h){
        cout<<(l-1)+(n-h)-1;
    }
    else{
        cout<<(l-1)+(n-h);
    }
return 0;
}