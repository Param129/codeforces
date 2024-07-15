#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<1;
        return 0;
    }

    int mx=0;
    int len=1;
    int prev=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>prev){
            prev=a[i];
            len++;
            mx=max(mx,len);
        }
        else{
            mx=max(mx,len);
            prev=a[i];
            len=1;
        }
    }

    cout<<mx;
return 0;
}