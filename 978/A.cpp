#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    vector<int>ans;
    set<int>st;
    for(int i=n-1;i>=0;i--){
        if(st.count(a[i])==0){
            ans.push_back(a[i]);
            st.insert(a[i]);
        }
    }
            cout<<ans.size()<<endl;
    for(int i=ans.size()-1;i>=0;i--){

        cout<<ans[i]<<" ";
    }

return 0;
}