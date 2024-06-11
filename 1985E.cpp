#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, z, k;
        cin >> x >> y >> z >> k;

        long long ans = 0;

        // Iterate through all possible dimensions of S
        for (long long i = 1; i <= x; i++) {
            for (long long j = 1; j <= y; j++) {
                for (long long l = 1; l <= z; l++) {
                    // Check if the volume of S matches k
                    if (i * j * l == k) {
                        
                        long long positions_x = x - i + 1;
                        long long positions_y = y - j + 1;
                        long long positions_z = z - l + 1;

                        // Calculate the total number of distinct locations where S can be placed inside B
                        ans += positions_x * positions_y * positions_z;
                    }
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
