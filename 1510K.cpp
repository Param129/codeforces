#include <bits/stdc++.h>
using namespace std;

// Function to check if the permutation is sorted
bool isSorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i-1] > a[i]) {
            return false;
        }
    }
    return true;
}

// Function to apply Type 1 operation
vector<int> applyType1(const vector<int>& a) {
    vector<int> res = a;
    for (int i = 0; i < res.size(); i += 2) {
        swap(res[i], res[i + 1]);
    }
    return res;
}

// Function to apply Type 2 operation
vector<int> applyType2(const vector<int>& a, int n) {
    vector<int> res = a;
    for (int i = 0; i < n; i++) {
        swap(res[i], res[n + i]);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }

    if (isSorted(a)) {
        cout << 0 << endl;
        return 0;
    }

    queue<pair<vector<int>, int>> q;
    set<vector<int>> visited;

    q.push({a, 0});
    visited.insert(a);

    while (!q.empty()) {
        auto [current, steps] = q.front();
        q.pop();

        // Apply Type 1 operation
        vector<int> type1Result = applyType1(current);
        if (isSorted(type1Result)) {
            cout << steps + 1 << endl;
            return 0;
        }
        if (visited.find(type1Result) == visited.end()) {
            q.push({type1Result, steps + 1});
            visited.insert(type1Result);
        }

        // Apply Type 2 operation
        vector<int> type2Result = applyType2(current, n);
        if (isSorted(type2Result)) {
            cout << steps + 1 << endl;
            return 0;
        }
        if (visited.find(type2Result) == visited.end()) {
            q.push({type2Result, steps + 1});
            visited.insert(type2Result);
        }
    }

    cout << -1 << endl; // If we exhaust the queue, sorting is impossible
    return 0;
}
