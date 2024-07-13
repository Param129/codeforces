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


50
49 37 30 2 18 48 14 48 50 27 1 43 46 5 21 28 44 2 24 17 41 38 25 18 43 28 25 21 28 23 26 27 4 31 50 18 23 11 13 28 44 47 1 26 43 25 22 46 32 45