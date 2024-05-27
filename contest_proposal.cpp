#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];

        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        int cnt=0;

        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                a.pop_back();
                a.push_back(b[0]);
                cnt++;
                sort(a.begin(),a.end());
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}