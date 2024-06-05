#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        string s; 
        cin>>s;
        s.erase(unique(s.begin(),s.end()),s.end());
        int ans = 0;
        for(auto c: s) 
        {
            if(c == '0') 
            ++ans;
        }
        cout<<min(ans,2)<<endl;
    }
}