#include<bits/stdc++.h>
using namespace std;

int findlast(int n){
    int i=1;
    int cnt=1;
    while(i<n){
        i=2*i;
        cnt++;
    }
    return cnt;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        int n=findlast(x);
        vector<int>a(n);
        a[n-1]=1;
        int val=pow(2,n-1);
        int remain=val-x;

        for(int i=n-2;i>=0;i--){
            if(pow(2,i)>remain){
                a[i]=0;
                continue;
            }
            else{
                a[i]=-1;
                remain=remain-pow(2,i);
            }
        }

        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}