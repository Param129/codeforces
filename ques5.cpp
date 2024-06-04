#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

// Function to transpose a matrix
vector<vector<int>> transpose(const vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> t(n, vector<int>(n));
    auto it = mat.begin();
    while (it != mat.end()) {
        auto inner_it = it->begin();
        int j = 0;
        while (inner_it != it->end()) {
            t[j][distance(mat.begin(), it)] = *inner_it;
            inner_it++;
            j++;
        }
        it++;
    }
    return t;
}

// Function to solve the problem
void sol() {
    int n, m;
    cin >> n >> m;

    // Reading the grids
    vector<vector<int>> grid1(n, vector<int>(m));
    vector<vector<int>> grid2(n, vector<int>(m));
    auto it = grid1.begin();
    while (it != grid1.end()) {
        auto inner_it = it->begin();
        while (inner_it != it->end()) {
            cin >> *inner_it;
            inner_it++;
        }
        it++;
    }
    it = grid2.begin();
    while (it != grid2.end()) {
        auto inner_it = it->begin();
        while (inner_it != it->end()) {
            cin >> *inner_it;
            inner_it++;
        }
        it++;
    }

    // Check if matrices have the same dimensions
    if (n == m) {
        unordered_set<string> stt;
        auto it = grid1.begin();
        while (it != grid1.end()) {
            string cur;
            auto inner_it = it->begin();
            while (inner_it != it->end()) {
                cur += to_string(*inner_it) + " ";
                inner_it++;
            }
            stt.insert(cur);
            it++;
        }

        it = grid2.begin();
        while (it != grid2.end()) {
            string cur;
            auto inner_it = it->begin();
            while (inner_it != it->end()) {
                cur += to_string(*inner_it) + " ";
                inner_it++;
            }
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
            it++;
        }

        grid1 = transpose(grid1);
        grid2 = transpose(grid2);
        stt.clear();

        it = grid1.begin();
        while (it != grid1.end()) {
            string cur;
            auto inner_it = it->begin();
            while (inner_it != it->end()) {
                cur += to_string(*inner_it) + " ";
                inner_it++;
            }
            stt.insert(cur);
            it++;
        }

        it = grid2.begin();
        while (it != grid2.end()) {
            string cur;
            auto inner_it = it->begin();
            while (inner_it != it->end()) {
                cur += to_string(*inner_it) + " ";
                inner_it++;
            }
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
            it++;
        }

        cout << "YES" << endl;
    } else {
        unordered_set<string> stt;
        auto it = grid1.begin();
        while (it != grid1.end()) {
            string cur;
            auto inner_it = it->begin();
            while (inner_it != it->end()) {
                cur += to_string(*inner_it) + " ";
                inner_it++;
            }
            stt.insert(cur);
            it++;
        }

        it = grid2.begin();
        while (it != grid2.end()) {
            string cur;
            auto inner_it = it->begin();
            while (inner_it != it->end()) {
                cur += to_string(*inner_it) + " ";
                inner_it++;
            }
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
            it++;
        }

        stt.clear();

        int j = 0;
        while (j < m) {
            unordered_set<int> cur;
            int i = 0;
            while (i < n) {
                cur.insert(grid1[i][j]);
                i++;
            }
            string key;
            for (int num : cur) {
                key += to_string(num) + " ";
            }
            stt.insert(key);
            j++;
        }

        j = 0;
        while (j < m) {
            unordered_set<int> cur;
            int i = 0;
            while (i < n) {
                cur.insert(grid2[i][j]);
                i++;
            }
            string key;
            for (int num : cur) {
                key += to_string(num) + " ";
            }
            if (stt.find(key) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
            j++;
        }

        cout << "YES" << endl;
    }
}

// Main function to read input and call sol() function
int main() {
    int t;
    cin >> t;
    while (t--) {
        sol();
    }
    return 0;
}
