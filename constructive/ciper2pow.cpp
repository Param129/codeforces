#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> powers;
    int power = 1;
    
    // Generate powers of two until we cover n using exactly k powers
    while (n > 0) {
        if (n % 2 == 1) {
            powers.push_back(power);
            k--;
        }
        n /= 2;
        power *= 2;
        powers.push_back(power);
        
        if (k == 0) break;
    }
    
    // If we couldn't use exactly k powers, output "NO"
    if (k > 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        for (int i = 0; i < powers.size(); ++i) {
            cout << powers[i];
            if (i < powers.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
