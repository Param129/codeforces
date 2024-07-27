#include <bits/stdc++.h>
using namespace std;

class TestCase {
public:
    int n, k;
    vector<int> a, b;

    TestCase(int n, int k, vector<int> a, vector<int> b) 
        : n(n), k(k), a(a), b(b) {}
};

class ScoreCalculator {
public:
    static long long calculateMaxScore(const TestCase& testCase) {
        long long score = 0;
        int n = testCase.n;
        int k = testCase.k;
        vector<int> a = testCase.a;
        vector<int> b = testCase.b;

        priority_queue<int> pq;
        for (int i = 0; i < n; ++i) {
            pq.push(a[i]);
        }

        while (k > 0 && !pq.empty()) {
            int current_max = pq.top();
            pq.pop();
            score += current_max;
            --k;
            int new_value = max(0, current_max - b[findIndex(a, current_max)]);
            if (new_value > 0) {
                pq.push(new_value);
            }
        }

        return score;
    }

private:
    static int findIndex(const vector<int>& a, int value) {
        // Find the index of the element in array a with the given value
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] == value) {
                return i;
            }
        }
        return -1;
    }
};

class MainController {
public:
    void processTestCases() {
        int t;
        cin >> t;
        while (t--) {
            auto [n, k, a, b] = readTestCase();
            long long result = ScoreCalculator::calculateMaxScore(TestCase(n, k, a, b));
            printResult(result);
        }
    }

private:
    tuple<int, int, vector<int>, vector<int>> readTestCase() {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        return {n, k, a, b};
    }

    void printResult(long long result) {
        cout << result << "\n";
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    MainController controller;
    controller.processTestCases();

    return 0;
}
