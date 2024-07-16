#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int currentLevel = 1;
    int height = 0;
    int cubesUsed = 0;

    while (true) {
        int cubesNeeded = currentLevel * (currentLevel + 1) / 2;
        if (cubesUsed + cubesNeeded <= n) {
            height++;
            cubesUsed += cubesNeeded;
            currentLevel++;
        } else {
            break;
        }
    }

    cout << height << endl;

    return 0;
}
