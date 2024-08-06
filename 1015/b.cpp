#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;

    string a=s;
    string b=t;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    // Check if transformation is possible
    if (a!=b) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> moves;

    for (int i = 0; i < n; ++i) {
        // Find the character in s that should be at position i
        int j = i;
        while (s[j] != t[i]) {
            ++j;
        }

        // Move s[j] to position i using adjacent swaps
        while (j > i) {
            swap(s[j], s[j - 1]);
            moves.push_back(j);
            --j;
        }
    }

    if (moves.size() > 10000) {
        cout << -1 << endl;
        return 0;
    }

    cout << moves.size() << endl;
    for (int move : moves) {
        cout << move << " ";
    }
    cout << endl;

    return 0;
}
