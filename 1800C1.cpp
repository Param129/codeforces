#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<long long>a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        }

        priority_queue<long long>pq;

        long long ans=0;
        for(long long i=0;i<n;i++){
            if(a[i]>0){
                pq.push(a[i]);
            }
            else if(a[i]==0){
                if(!pq.empty()){
                    ans+=pq.top();
                pq.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
return 0;
}