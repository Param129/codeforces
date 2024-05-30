#include<bits/stdc++.h>
using namespace std;

int main(){
    int  t;
    cin>>t;
    while(t--){
        vector<pair<int,int>>v;
        for(int i=0;i<4;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }

        int c=v[0].first;
        int a=v[0].second;
        int b=0;
        for(int i=1;i<4;i++){
            if(v[i].first==c){
                b=v[i].second;
                break;
            }
        }
        // cout<<a<<"-"<<b<<endl;
        int ar=(abs(a-b));
        cout<<ar*ar<<endl;
        // cout<<area<<endl;
    }
return 0;
}