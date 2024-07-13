#include <bits/stdc++.h>
using namespace std;

string getstr() {
    static int counter = 0;
    string characters = "abcdefghijklmnopqrstuvwxyz";
    string result;
    
    // First character uppercase
    result += 'A' + counter / 26;

    // Remaining characters lowercase
    for (int i = 1; i < 5; ++i) {
        result += characters[counter % 26];
    }

    counter++;
    return result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> v(n - k + 1);
    for (int i = 0; i < n - k + 1; i++) {
        cin >> v[i];
    }

    vector<string> ans(n);
    
    // Generate initial unique names for the first k soldiers
    for (int i = 0; i < k; ++i) {
        ans[i] = getstr();
    }

    // Process each segment based on the given conditions
    int j=0;
    for (int i = k-1; i < n; ++i) {
        if (v[j] == "YES") {
            ans[i] = getstr();
        } else {
            ans[i] = ans[j];
        }
        j++;
    }

    // Print the final list of names
    for (int i = 0; i < n; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
