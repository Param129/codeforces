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

    for(int i=0;i<n;i++){
        if(a[i]==mx && mx==1){
            a[i]=2;
            break;
        }
        if(a[i]==mx){
            a[i]=1;
            break;
        }
    }

    sort(a.begin(),a.end());
    for(auto it:a){
        cout<<it<<" ";
    }
return 0;
}