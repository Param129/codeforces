#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int i=1;
    int total=0;
    int cur=k;
    while(w--){
        total+=cur;
        i++;
        cur=k*i;
    }

    if(total-n <=0)cout<<0;
    else{
        cout<<total-n;
    }

return 0;
}

// 3,6,9,12