#include<bits/stdc++.h>
using namespace std;



int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        vector<long long>v(n);
        for(long long i=0;i<n;i++){
            cin>>v[i];
        }

        vector<long long>ans(n,0);
        set<long long>se;

        long long mn=0;
        long long mx=1;

         for(long long i = 0 ; i < n ; i++) {
            if(se.count(mn - v[i]) || (mn - v[i])<0) {
                ans[i] = mx - v[i];
            }
            else {
                ans[i] = mn - v[i];
            }
            if(ans[i] == mn) {
                mn = mx;
                mx++;
                while(se.count(mx))    
                    mx++;
            }
            else if(ans[i] == mx) {
                mx++;
                while(se.count(mx))    
                    mx++;
            }
            se.insert(ans[i]);
        }

        for(long long i=0;i<n;i++){
            
        }


        for(long long i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}