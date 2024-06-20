#include <bits/stdc++.h>
using namespace std;

bool check(int k, vector<int> a) {
    int n = a.size();
    multiset<int> elements(a.begin(), a.end());
    
    for (int i = 1; i <= k; i++) {
        int current_limit = k - i + 1;
        auto it = elements.upper_bound(current_limit);
        if (it == elements.begin()) {
            return false;
        }
        --it;
        elements.erase(it);
        if (!elements.empty()) {
            int top = *elements.begin();
            elements.erase(elements.begin());
            elements.insert(top + current_limit);
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int l = 0;
        int h = n; // The maximum k can't be more than n because we can't have more stages than the number of elements
        int ans = 0;
        
        while (l <= h) {
            int mid = (l + h) / 2;
            if (check(mid, a)) {
                ans = mid;
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
