#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        
        int cut=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                cut++;
            }
        }
        if(s.find("01")!=-1)cut--;
        cout<<cut<<endl;
    }
return 0;
}