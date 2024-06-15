#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    set<int>st;

    while(st.find(n)==st.end()){
        st.insert(n);
        n=n+1;
        while(n%10==0){
            n=n/10;
        }
    }

    cout<<st.size()<<endl;

return 0;
}