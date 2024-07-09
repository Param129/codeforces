#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>ans;

        int p=1;
        while(n){
            int dig=n%10;
            n=n/10;
            if(dig!=0){
                ans.push_back(p*dig);
            }
            
            p=p*10;
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
return 0;
}