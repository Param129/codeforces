#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;


        vector<int>v;
        for(int i=0,j=n-1;i<=j && v.size()<=300;){
            if(s[i]==s[j]){
                if(s[i]=='1'){
                    s.insert(i,"01");
                    v.push_back(i);
                }
                else{
                    s.insert(j+1,"01");
                    v.push_back(j+1);
                }

                i++;
                j++;
            }
            else{
                i++;
                j--;
            }
        }

        if(v.size()>300){
            cout<<-1<<endl;
        }
        else{
            cout<<v.size()<<endl;
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
return 0;
}