#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class PermutationChecker {
public:
    bool arePermutationsEqual(vector<int>& permutation1, vector<int>& permutation2) {
        unordered_map<int, int> permutation2Map;
        for (int index = 0; index < permutation2.size(); ++index) {
            permutation2Map[permutation2[index]] = index;
        }

        int size = permutation1.size();
        int swapCount = 0;
        int i = 0;
        while (i < size) {
            if (permutation1[i] != permutation2[i]) {
                swapCount++;
                int swapIndex = permutation2Map[permutation1[i]];
                swap(permutation2[i], permutation2[swapIndex]);
                permutation2Map[permutation2[swapIndex]] = swapIndex;
                permutation2Map[permutation1[i]] = i;
            }
            i++;
        }

        return swapCount % 2 == 0;
    }
};

class InputHandler {
public:
    void handleInput() {
        int testCases;
        do {
            cin >> testCases;
        } while (testCases <= 0);

        while (testCases > 0) {
            int arraySize;
            do {
                cin >> arraySize;
            } while (arraySize <= 0);

            vector<int> arrayA(arraySize), arrayB(arraySize);

            int i = 0;
            while (i < arraySize) {
                cin >> arrayA[i];
                i++;
            }

            i = 0;
            while (i < arraySize) {
                cin >> arrayB[i];
                i++;
            }

            PermutationChecker checker;
            vector<int> sortedArrayA = arrayA, sortedArrayB = arrayB;
            sort(sortedArrayA.begin(), sortedArrayA.end());
            sort(sortedArrayB.begin(), sortedArrayB.end());

            if (sortedArrayA != sortedArrayB) {
                cout << "NO" << endl;
            } else {
                if (checker.arePermutationsEqual(arrayA, arrayB)) {
                    cout << "YES" << endl;
                } else {
                    cout << "NO" << endl;
                }
            }

            testCases--;
        }
    }
};

int main() {
    InputHandler inputHandler;
    inputHandler.handleInput();
    
    return 0;
}
