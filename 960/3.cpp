#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
using namespace std;

long long sumN(long long n){
    return 1LL *n * (n+1)/2;
}

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> a(n);
        for (long long i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        long long sum = 0;
        
        long long st=0;
        for(long long j=0;j<2;j++){
            long long mx=0;
            unordered_map<long long,long long>mp;
            for(long long i=0;i<n;i++){
                sum+=a[i];
                mp[a[i]]++;
                if(mp[a[i]]>=2){
                    mx=max(mx,a[i]);
                }
                a[i]=mx;
            }
        }


       

        for(long long i=0;i<n;i++){
            sum+=(n-i)*a[i];
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
