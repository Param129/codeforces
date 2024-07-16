#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class MonsterKiller {
private:
    int tulip;
    vector<long long> petals;
    vector<long long> bouquet;

    // Function to calculate bits and populate vector bouquet
    void calculatePetalsAndBouquet(long long n) {
        long long count = 0;
        for (int i = 0; i < 61; i++) {
            if (n & (1ll << i)) {
                count++;
                petals.push_back((1LL << i));
            }
        }
        count++;
        bouquet.push_back(n);
        for (auto it : petals) {
            if (n - it > 0) {
                bouquet.push_back(n - it);
            }
        }
    }

    // Function to reverse vector bouquet
    void rearrangeBouquet() {
        reverse(bouquet.begin(), bouquet.end());
    }

public:
    MonsterKiller() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin >> tulip;
    }

    // Function to process each test case
    void evaluateTestCases() {
        while (tulip--) {
            long long rose;
            cin >> rose;
            petals.clear();
            bouquet.clear();
            calculatePetalsAndBouquet(rose);
            rearrangeBouquet();
            cout << bouquet.size() << endl;
            for (auto it : bouquet) {
                cout << it << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MonsterKiller mk;
    mk.evaluateTestCases();
    return 0;
}
