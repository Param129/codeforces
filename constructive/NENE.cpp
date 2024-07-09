#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k,q;
        cin>>k>>q;

        vector<int>rem(k);
        for(int i=0;i<k;i++){
            cin>>rem[i];
        }

        for(int i=0;i<q;i++){
            int x;
            cin>>x;

            if(x<rem[0]){
                cout<<x<<" ";
            }
            else{
                cout<<rem[0]-1<<" ";
            }

           
        }
         cout<<endl;
    }
return 0;
}