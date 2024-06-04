#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define int long long
typedef pair<int, int> II;
typedef vector<II> VII;
typedef vector<int> VI;
typedef vector<VI> VVI;


signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
            int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n);

    set<int> store;
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
        store.insert(b[i]);
    }
    map<int, int> maput;
    for (int i = 0; i < n; ++i) {
        if (a[i] != b[i])
            maput[b[i]]++;
    }

    int m;
    cin >> m;
    bool found = false;
    for (int i = 0; i < m; ++i) {
        int ele;
        cin >> ele;
        if (maput.find(ele) != maput.end()) {
            maput[ele]--;
            if (maput[ele] == 0)
                maput.erase(ele);
            if (i == m - 1)
                found = true;
        } else if (store.count(ele)) {
            if (i == m - 1)
                found = true;
        }
    }

    if (found && maput.empty()) {
        cout << "YES"<<endl;
    } else
        cout << "NO"<<endl;

    }
    return 0;
}
