#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;

        int zerotoone=0;
        int onetozero=0;

        for(int i=0;i<n;i++){
            if(s1[i]=='0' && s2[i]=='1'){
                zerotoone++;
            }
            if(s1[i]=='1' && s2[i]=='0'){
                onetozero++;
            }
        }

        if(zerotoone>=onetozero){
            cout<<zerotoone<<endl;
        }
        else{
            cout<<onetozero<<endl;
        }
    }
return 0;
}