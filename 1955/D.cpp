#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> b_count;
        for (int j = 0; j < m; j++) {
            cin >> b[j];
            b_count[b[j]]++;
        }

        unordered_map<int, int> window_count;
        int matches = 0, good_subsegments = 0;

        // Initialize the first window
        for (int i = 0; i < m; i++) {
            window_count[a[i]]++;
        }

        // Calculate initial matches
        for (const auto& [num, count] : b_count) {
            matches += min(window_count[num], count);
        }

        if (matches >= k) {
            good_subsegments++;
        }

        // Slide the window
        for (int i = m; i < n; i++) {
            int new_element = a[i];
            int old_element = a[i - m];

            if (window_count[old_element] <= b_count[old_element]) {
                matches--;
            }
            window_count[old_element]--;

            window_count[new_element]++;
            if (window_count[new_element] <= b_count[new_element]) {
                matches++;
            }

            if (matches >= k) {
                good_subsegments++;
            }
        }

        cout << good_subsegments << endl;
    }

    return 0;
}
