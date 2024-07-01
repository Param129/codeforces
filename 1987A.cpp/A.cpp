#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;

        if(n==1)cout<<1<<endl;
        else if(k==1)cout<<n<<endl;
        else{
            cout<<k*(n-1)+1<<endl;
        }
    }
return 0;
}