#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class MinLengthCalculator {
public:
    static int calculate(const string &rose, const string &tulip) {
        int m = tulip.size();
        int n = rose.size();
        int ans = m;
        int i = 0;

        do {
            int cur = i;
            int j = i;
            int k = 0;

            do {
                if (j < m && rose[k] == tulip[j]) {
                    j++;
                }
                if (j == m) break;
                k++;
            } while (k < n);

            ans = min(ans, cur + m - j);
            i++;
        } while (i < m);

        return ans + n;
    }
};

class TestCaseManager {
public:
    static void run() {
        int t;
        cin >> t;
        vector<int> results(t);

        for (int i = 0; i < t; ++i) {
            string rose, tulip;
            cin >> rose >> tulip;
            results[i] = MinLengthCalculator::calculate(rose, tulip);
        }

        for (const int &res : results) {
            cout << res << endl;
        }
    }
};

int main() {
    TestCaseManager::run();
    return 0;
}
