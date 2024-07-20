#include <iostream>
#include <vector>
#include <unordered_map>
#include <numeric>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int sum = 0;
        bool allZero = false;
        
        while (!allZero) {
            int currentSum = accumulate(a.begin(), a.end(), 0); // Calculate current sum of array a
            sum += currentSum;
            
            unordered_map<int, int> mp;
            int mx = 0;
            allZero = true;
            
            for (int i = 0; i < n; ++i) {
                if (a[i] > 0) {
                    allZero = false;
                    mp[a[i]]++;
                    if (mp[a[i]] >= 2) {
                        mx = max(mx, a[i]);
                    }
                    a[i] = mx; 
                }
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
