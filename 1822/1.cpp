#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n, t;
        cin >> n >> t;
        vector<int> durations(n), entertainment(n);
        for (int i = 0; i < n; i++) {
            cin >> durations[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> entertainment[i];
        }

        int maxEntertainment = -1;
        int bestIndex = -1;

        for (int i = 0; i < n; i++) {
            int timeToReach = i;
            int totalTimeRequired = timeToReach + durations[i];
            
            if (totalTimeRequired <= t) {
                if (entertainment[i] > maxEntertainment) {
                    maxEntertainment = entertainment[i];
                    bestIndex = i + 1; // Indexing is 1-based
                }
            }
        }

        cout << bestIndex << endl;
    }
    return 0;
}
