#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> v(n+1);  // Use n+1 to make it easier to handle 1-based indexing

        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        int ans=3;
        for(int i=1;i<=n;i++){
            if(v[v[i]]==i)ans=2;
        }

        cout<<ans<<endl;
    }

    return 0;
}
