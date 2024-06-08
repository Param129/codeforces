#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s = "aaa"; // Start with the smallest possible 3-letter word

        // Allocate the remaining sum to the letters
        // Ensure the letters are adjusted in a way that the word remains lexicographically smallest
        int remaining = n - 3; // Since 'aaa' sums to 3
        
        for (int i = 2; i >= 0 && remaining > 0; --i) {
            int add = min(25, remaining); // We can add at most 25 to each letter ('a' is 1, 'z' is 26)
            s[i] += add;
            remaining -= add;
        }

        cout << s << endl;
    }
    return 0;
}
