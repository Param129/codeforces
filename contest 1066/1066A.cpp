#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int L, v, l, r;
        cin >> L >> v >> l >> r;
        
        int visible_lanterns = L / v;
        int blocked_lanterns = (r / v) - ((l - 1) / v);
        int visible_after_blocking = visible_lanterns - blocked_lanterns;
        
        cout << visible_after_blocking << endl;
    }
    
    return 0;
}
