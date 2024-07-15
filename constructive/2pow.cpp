#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    
    long long ans = 0;

    // Iterate through each element in the array
    for (int i = 0; i < n; ++i) {
        // Iterate through powers of 2
        for (int j = 0; j <= 30; ++j) { // powers of 2 up to 2^31
        
            int powof2 = 1 << j;
            int tofind = powof2 - arr[i];

            // Ensure tofind is a valid element and not the same index i
            if (tofind >= 0 && mp.find(tofind) != mp.end()) {
                // If tofind == arr[i], we should subtract 1 to avoid counting (i, i) twice
                if (tofind == arr[i]) {
                    ans += mp[tofind] - 1;
                } else {
                    ans += mp[tofind];
                }
            }
        }
    }

    cout << ans / 2 << endl;  // Divide by 2 to account for double-counting each pair

    return 0;
}
