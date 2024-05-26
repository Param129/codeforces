#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& a) {
    int n = a.size();
    for(int i = 1; i < n; ++i) {
        if (a[i-1] > a[i]) {
            return false;
        }
    }
    return true;
}

bool canBeSortedBySwapping(vector<int>& a) {
    int n = a.size();
    if (isSorted(a)) return true;
    
    int breakPoint = -1;
    for (int i = 1; i < n; ++i) {
        if (a[i-1] > a[i]) {
            breakPoint = i;
            break;
        }
    }

    if (breakPoint == -1) return true;

    vector<int> rotated;
    for (int i = breakPoint; i < n; ++i) {
        rotated.push_back(a[i]);
    }
    for (int i = 0; i < breakPoint; ++i) {
        rotated.push_back(a[i]);
    }
    
    return isSorted(rotated);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        
        if (canBeSortedBySwapping(v)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
