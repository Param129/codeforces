#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n;
    cin>>n;
    //  unordered_set<long long>st;

    vector<long long>a(n);
    for(long long i=0;i<n;i++){
        cin>>a[i];
    }

   
    set<pair<long long,long long>>st;

    for(long long i=0;i<n;i++){
        long long val=a[i];
        long long x=val;
        long long cnt=0;

        while(x%3==0){
            x=x/3;
            cnt++;
        }

        st.insert({-cnt,val});
    }
   
    for(auto it:st){
        cout<<it.second<<" ";    }
 

return 0;
}