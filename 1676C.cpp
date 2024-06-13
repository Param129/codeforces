#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;
        vector<string> v(n);

        for(long long i = 0; i < n; i++){
            cin >> v[i];
        }1800

        long long ans = LLONG_MAX;
        
        for(long long i = 0; i < n; i++){
            for(long long j = i+1; j < n; j++){
                long long cost = 0;
                for(long long k = 0; k < m; k++){
                    cost += abs(v[i][k] - v[j][k]);
                }
                ans = min(ans, cost);
            }
        }

        cout << ans << endl;
    }
    return 0;
}
