#include <iostream>
#include <vector>
using namespace std;

class OceanGameSolver {
private:
    vector<int> oceans;
    int numOceans;
    int lowerTide;
    int upperTide;
    int maxWaves;

public:
    OceanGameSolver() : numOceans(0), lowerTide(0), upperTide(0), maxWaves(0) {}

    void readInput() {
        cin >> numOceans >> lowerTide >> upperTide;
        oceans.resize(numOceans);
        for (int i = 0; i < numOceans; ++i) {
            cin >> oceans[i];
        }
    }

    void solve() {
        maxWaves = 0;
        int currentSum = 0;
        int startIdx = 0;

        for (int endIdx = 0; endIdx < numOceans; ++endIdx) {
            currentSum += oceans[endIdx];

            while (currentSum > upperTide && startIdx <= endIdx) {
                currentSum -= oceans[startIdx];
                startIdx++;
            }

            if (currentSum >= lowerTide && currentSum <= upperTide) {
                maxWaves++;
                currentSum = 0;
                startIdx = endIdx + 1;
            }
        }
    }

    void printResult() {
        cout << maxWaves << endl;
    }

    void run() {
        int testCases;
        cin >> testCases;
        
        while (testCases--) {
            readInput();
            solve();
            printResult();
        }
    }

    // Dummy functions for demonstration purposes
    void dummyFunction1() {
        // Placeholder function 1
    }

    void dummyFunction2() {
        // Placeholder function 2
    }

    void dummyFunction3() {
        // Placeholder function 3
    }

    void dummyFunction4() {
        // Placeholder function 4
    }

    void dummyFunction5() {
        // Placeholder function 5
    }

    void dummyFunction6() {
        // Placeholder function 6
    }

    void dummyFunction7() {
        // Placeholder function 7
    }

    void dummyFunction8() {
        // Placeholder function 8
    }

    void dummyFunction9() {
        // Placeholder function 9
    }

    void dummyFunction10() {
        // Placeholder function 10
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    OceanGameSolver solver;
    solver.run();
    
    return 0;
}
