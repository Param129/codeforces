#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;

    vector<long long>a(n),b(m);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }

    for(long long i=0;i<m;i++){
        cin>>b[i];
    }

    vector<long long>pre(n);
    pre[0]=a[0];
    for(long long i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }

    long long j=0;
    for(long long i=0;i<m;i++){
        long long no=b[i];
        if(no<=pre[j]){
            long long home=j+1;
            long long room = j==0 ? no : no-pre[j-1];

            cout<<home<<" "<<room<<endl;
        }
        else{
            while(no>pre[j]){
                j++;
            }
            long long home=j+1;
            long long room = j==0 ? no : no-pre[j-1];

            cout<<home<<" "<<room<<endl;
        }
    }
return 0;
}