#include <bits/stdc++.h>
using namespace std;

// Function to check if it's possible to have a subarray with a median >= target
bool isPossible(vector<int>& arr, int target) {
    int n = arr.size();
    vector<int> prefixSum(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        prefixSum[i + 1] = prefixSum[i] + (arr[i] >= target ? 1 : -1);
    }

    int minPrefix = 0;
    for (int i = 2; i <= n; ++i) {
        minPrefix = min(minPrefix, prefixSum[i - 2]);
        if (prefixSum[i] - minPrefix > 0) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n);
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }
        
        int low = 0;
        int high = 1e9 + 1;

        while (high> 1+low) {
            int mid = low + (high - low) / 2;
            if (isPossible(array, mid)) {
                low = mid;
            } else {
                high = mid;
            }
        }
        
        cout << low << endl;
    }
    return 0;
}
