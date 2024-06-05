#include<bits/stdc++.h>
using namespace std;

long long fun(long long n1,long long n2){
    long long sum=0;
    while(n1<=n2){
        sum+=n1;
        n1++;
    }
    return sum;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        cout<<-1ll*(n-1)<<" "<<n<<endl;
    }
return 0;
}