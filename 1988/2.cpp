#include <bits/stdc++.h>
using namespace std;

 
#define int long long int
#define vi vector<int>
#define read(a) for(auto &i: a) cin>>i
// #define mod 998244353
#define mod 1000000007

 
signed main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t=1;
 cin>>t;
 // sieve();
 while(t--){
  int n;
  cin>>n;
  int ans=0;
  vector<int> v;
  vector<int> bits;
  for(int i=0;i<61;i++){
   if(n & (1ll<<i)){ans++;bits.push_back((1LL<<i));}
  }
  ans++;
  // cout<<ans<<endl;
  v.push_back(n);
  for(auto it:bits){
   if(n-it>0){
    v.push_back(n-it);
   }
  }
  
  reverse(v.begin(),v.end());
  cout<<v.size()<<endl;
  for(auto it:v){
   cout<<it<<" ";
  }
  cout<<endl;
 }
 // 8
// 00000111
    return 0;
}