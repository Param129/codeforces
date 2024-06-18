#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
   int t;cin>>t;
   while ( t--)
   {   
     int n;cin>>n;vector<int>v(n+1);
        for ( int i = 0; i <n; i++)
        {
             cin>>v[i];
        }

         if(n%2){
            cout<<"YES"<<endl;
         }
         else
         {
             for(int i=1;i<n-1;i++){
                int temp=v[i-1]-v[i];
                 v[i]+=temp;
                 v[i+1]+=temp;
               }

           if(v[n-1]<v[n-2]){
              cout<<"NO"<<endl;
              }
            else cout<<"YES"<<endl;
         }
         
    } 
}