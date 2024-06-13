#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        vector<vector<int>>v(26,vector<int>(2,0));
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                v[s[i]-'a'][0]++;
            }
            else{
                v[s[i]-'A'][1]++;
            }
        }

        int ans=0;
        for(int i=0;i<v.size();i++){
            ans+=min(v[i][0],v[i][1]);
            int x=min(k,abs(v[i][0]-v[i][1])/2);
            ans+=x;
            k=k-x;
        }

        cout<<ans<<endl;
    }
return 0;
}