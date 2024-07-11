#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int rose, tulip, sunflower;
        cin >> rose >> tulip >> sunflower;

        int max_bouquet = 0;

        // Try all possible increments up to 5 for each flower
        int r = 0;
        while (r <= 5) {
            int t = 0;
            while (t <= 5) {
                int s = 0;
                while (s <= 5) {
                    int current_bouquet = (rose + r) * (tulip + t) * (sunflower + s);
                    max_bouquet = max(max_bouquet, current_bouquet);
                    s++;
                }
                t++;
            }
            r++;
        }

        cout << max_bouquet << endl;
    }

    return 0;
}
