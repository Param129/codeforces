#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

    vector<pair<int , int>>a;
    vector<int>ans(n);
    for(int i=0 ; i<n ; i++){
      int temp;
      cin>>temp;
      a.push_back({temp , i});//[ 10 3 3 -- 3 3 10 -- 10 3 3 ]
    }                          //[  0 1 2 -- 1 2 0  --  0 2 1 ]
    sort(a.begin() , a.end());
    reverse(a.begin() , a.end());
    for(int i=0 ; i<n ; i++){
      ans[a[i].second] = i+1;
    }
    for(auto i : ans)cout<<i<<' ';
    cout<<endl;


    }
return 0;
}