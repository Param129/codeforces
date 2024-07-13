#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int k1;
    cin>>k1;

    deque<int>dq1;
    for(int i=0;i<k1;i++){
        int x;
        cin>>x;
        dq1.push_back(x);
    }
    int k2;
    cin>>k2;

    deque<int>dq2;
    for(int i=0;i<k2;i++){
        int x;
        cin>>x;
        dq2.push_back(x);
    }

    int sz=2*n;
    bool fl=true;
    int cnt=0;
    int en=0;
    set<pair<deque<int>,deque<int>>>st;

    while(dq1.size()>0 && dq2.size()>0){
              if(st.find({dq1,dq2})!=st.end()){
            fl=false;
            break;
        }

           st.insert({dq1,dq2});

        int e1=dq1.front();
        dq1.pop_front();
        int e2=dq2.front();
        dq2.pop_front();

       
  
        if(e1>e2){
            dq1.push_back(e2);
            dq1.push_back(e1);
        }
        else{
            dq2.push_back(e1);
            dq2.push_back(e2);
        }
         if(dq1.size()==0){
            en=2;
        }
        if(dq2.size()==0){
            en=1;
        }
        cnt++;
     
    }

    if( fl==false){
        cout<<-1<<endl;
    }
    else{
        cout<<cnt<<" "<<en;
    }

return 0;
}