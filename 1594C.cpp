#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char ch;
        cin>>n;
        cin>>ch;

        string s;
        cin>>s;
    bool ok=true;
    int in=-1;
    for(int i=0;i<n;i++){
        if(s[i]==ch)in=i;
        if(s[i]!=ch)ok=false;
    }
    if(ok)
    cout<<"0\n";
    else if(in==-1){
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    else if(in==n-1)
    {
        cout<<"1\n"<<in+1<<"\n";
    }
    else if(in>=n/2)
    {
        
        cout<<"1\n"<<in+1<<"\n";
    }
    else
    {
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }

    }
return 0;
}