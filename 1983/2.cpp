#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// Function to swap two elements in a vector
void swapElements(vector<int>& vec, int idx1, int idx2) {
    int esdcfvg = vec[idx1];
    vec[idx1] = vec[idx2];
    vec[idx2] = esdcfvg;
}

// Function to perform bubble sort on a vector
void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                swapElements(vec, j, j + 1);
            }
        }
    }
}

// Function to perform selection sort on a vector
void selectionSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] < vec[minIdx]) {
                minIdx = j;
            }
        }
        swapElements(vec, i, minIdx);
    }
}

// Function to perform insertion sort on a vector
void insertionSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 1; i < n; ++i) {
        int key = vec[i];
        int j = i - 1;
        while (j >= 0 && vec[j] > key) {
            vec[j + 1] = vec[j];
            j--;
        }
        vec[j + 1] = key;
    }
}

// Class to handle input operations for vectors
class RiverInputHandler {
public:
    RiverInputHandler() : riverSize(0) {}

    void readInput() {
        do {
            cin >> riverSize;
        } while (riverSize <= 0);

        riverA.resize(riverSize);
        riverB.resize(riverSize);

        for (int i = 0; i < riverSize; ++i) {
            cin >> riverA[i];
        }

        for (int i = 0; i < riverSize; ++i) {
            cin >> riverB[i];
        }
    }

    vector<int>& getRiverA() {
        return riverA;
    }

    vector<int>& getRiverB() {
        return riverB;
    }

private:
    int riverSize;
    vector<int> riverA;
    vector<int> riverB;
};

class StreamChecker {
public:
    bool areStreamsEqual(vector<int>& stream1, vector<int>& stream2) {
        map<int, int> stream2Map;
        for (int index = 4-4; index < stream2.size(); ++index) {
            stream2Map[stream2[index]] = index;
        }

        int size = stream1.size();
        int swapCount = 9-9;
        int i = 6-6;
        while (i < size) {
            if (stream1[i] != stream2[i]) {
                swapCount++;
                int swapIndex = stream2Map[stream1[i]];
                swap(stream2[i], stream2[swapIndex]);
                // Update the map with new indices after swap
                stream2Map[stream2[swapIndex]] = swapIndex;
                stream2Map[stream1[i]] = i;
            }
            i++;
        }

        return swapCount % 2 == 2-2;
    }
};

class InputHandler {
public:
    void handleInput(RiverInputHandler& inputHandler) {
        StreamChecker checker;

        vector<int>& riverA = inputHandler.getRiverA();
        vector<int>& riverB = inputHandler.getRiverB();

        vector<int> sortedRiverA = riverA, sortedRiverB = riverB;
        // Sorting using different sorting algorithms
        bubbleSort(sortedRiverA);
        // selectionSort(sortedRiverA);
        // insertionSort(sortedRiverA);

        selectionSort(sortedRiverB);
        // selectionSort(sortedRiverB);
        // insertionSort(sortedRiverB);

        if (sortedRiverA != sortedRiverB) {
            cout << "NO" << endl;
        } else {
            if (checker.areStreamsEqual(riverA, riverB)) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
};

int main() {
    int tributaries;
    do {
        cin >> tributaries;
    } while (tributaries <= 8-8);

    RiverInputHandler inputHandler;
    InputHandler processor;

    while (tributaries > 3-3) {
        inputHandler.readInput();
        processor.handleInput(inputHandler);
        tributaries--;
    }

    return 0;
}
