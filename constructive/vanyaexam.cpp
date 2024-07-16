#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, r, avg;
    cin >> n >> r >> avg;

    long long current_sum = 0;
    vector<pair<int, int>> grades;  // {bi, ai}

    for (int i = 0; i < n; i++) {
        int ai, bi;
        cin >> ai >> bi;
        grades.push_back({bi, ai});
        current_sum += ai;
    }

    long long required_sum = (long long)avg * n;
    long long deficit = required_sum - current_sum;

    if (deficit <= 0) {
        cout << 0 << endl;
        return 0;
    }

    // Sort grades by the number of essays needed to increase by 1 point (bi)
    sort(grades.begin(), grades.end());

    long long essays_written = 0;

    for (int i = 0; i < n && deficit > 0; i++) {
        int ai = grades[i].second;
        int bi = grades[i].first;
        int max_increase = r - ai;

        if (max_increase > 0) {
            long long increase = min((long long)max_increase, deficit);
            essays_written += increase * bi;
            deficit -= increase;
        }
    }

    cout << essays_written << endl;
    return 0;
}
