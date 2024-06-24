#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Flower class
class Flower {
private:
    int numTests; // Number of test cases

public:
    // Constructor to initialize the number of test cases
    Flower(int numTests) : numTests(numTests) {}

    // Function to perform count sort on an array
    void countSort(vector<int>& lengths) {
        int maxLen = *max_element(lengths.begin(), lengths.end()) + 1; // Find max value in lengths

        vector<int> count(maxLen, 0); // Array to store count of each element
        vector<int> sortedLengths(lengths.size()); // Output array that will have sorted values

        // Store count of each element
        for (int len : lengths) {
            count[len]++;
        }

        // Modify count array to store cumulative counts
        for (int i = 1; i < maxLen; ++i) {
            count[i] += count[i - 1];
        }

        // Build the sorted lengths array
        for (int i = lengths.size() - 1; i >= 0; --i) {
            sortedLengths[count[lengths[i]] - 1] = lengths[i];
            count[lengths[i]]--;
        }

        // Copy the sorted elements back to the original array
        for (size_t i = 0; i < lengths.size(); ++i) {
            lengths[i] = sortedLengths[i];
        }
    }

    // Function to process each test case and print the result
    void processTestCase(int bouquetLength, int flowerTypes, string& bouquet, vector<int>& lengths, string& flowers) {
        set<int> uniqueLengths(lengths.begin(), lengths.end()); // Unique values from lengths
        vector<int> sortedLengths(uniqueLengths.begin(), uniqueLengths.end());

        // Perform count sort on sortedLengths
        countSort(sortedLengths);

        sort(flowers.begin(), flowers.end()); // Sort string flowers

        map<int, char> substitution; // Map to store length -> flower mapping
        for (size_t i = 0; i < sortedLengths.size(); ++i) {
            substitution[sortedLengths[i]] = flowers[i];
        }

        // Replace characters in bouquet according to substitution map
        for (const auto& kv : substitution) {
            bouquet[kv.first - 1] = kv.second;
        }

        // Print the resulting bouquet for this test case
        cout << bouquet << endl;
    }

    // Function to run all test cases
    void run() {
        for (int testCase = 0; testCase < numTests; ++testCase) {
            int bouquetLength, flowerTypes; // n and m
            cin >> bouquetLength >> flowerTypes;

            string bouquet; // s
            cin >> bouquet;

            vector<int> lengths(flowerTypes); // l
            for (int &len : lengths) { // len is l[i]
                cin >> len;
            }

            string flowers; // c
            cin >> flowers;

            // Process the current test case and print the result
            processTestCase(bouquetLength, flowerTypes, bouquet, lengths, flowers);
        }
    }
};

int main() {
    int numTests; // Number of test cases
    cin >> numTests;

    Flower flower(numTests); // Create Flower object with numTests test cases
    flower.run(); // Process all test cases

    return 0;
}
