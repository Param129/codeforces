#include<bits/stdc++.h>
using namespace std;

bool ispossible(string s, long long jump){
    long long current = 0; // Start from cell 0
    long long n = s.size();
    
    while (current <= n) {
        long long next = current; // Next position to jump to
        
        // Try to jump within the jump distance
        for (long long i = current + 1; i <= min(n + 1, current + jump); ++i) {
            if (i == n + 1 || (s[i - 1] == 'R' && i > current) || (s[i - 1] == 'L' && i <= current)) {
                next = i; // Update the next position
            }
        }
        
        if (next == current) return false; // If no progress is made, return false
        current = next; // Move to the next position
    }
    
    return true;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        long long l=0;
        long long h=s.size()+1;
        long long ans=0;
        while(l<=h){
            long long mid=l+(h-l)/2;

            if(ispossible(s,mid)){
                ans=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}