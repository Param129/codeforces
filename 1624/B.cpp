#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        
        // Check if the sequence can form an arithmetic progression
        if((b - a) == (c - b)){
            cout<<"YES"<<endl;
        }
        // Check if b can be the average of a and c
        else if((a + c) % (2 * b) == 0){
            cout<<"YES"<<endl;
        }
        // Check if a can be the term in the progression
        else if((2 * b - c) % a == 0 && (2 * b - c) / a > 0){
            cout<<"YES"<<endl;
        }
        // Check if c can be the term in the progression
        else if((2 * b - a) % c == 0 && (2 * b - a) / c > 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        } 
    }
    return 0;
}
