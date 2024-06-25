#include<bits/stdc++.h>
using namespace std;

int q, i, x, y;
char t;
map<int, int> m;

int main() {
    // Initialize x and y to 300000 + 1, since x and y are initialized to 300000 and then incremented by 1
    for (x = y = 300000, x++, cin >> q; q--; ) {
        cin >> t >> i;  // Read the type of query (t) and the integer (i)
        
        if (t == '?') {
            // If query type is '?', calculate the minimum distance of the position of i from either end
            cout << min(m[i] - x, y - m[i]) << endl;
        } else if (t == 'L') {
            // If query type is 'L', assign the current position to the left and decrement x
            m[i] = --x;
        } else {
            // If query type is 'R', assign the current position to the right and increment y
            m[i] = ++y;
        }
    }
}
