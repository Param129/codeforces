#include <iostream>
#include <deque>
#include <unordered_map>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    deque<int> left_deque, right_deque;
    unordered_map<int, int> position_map;
    vector<int> results;
    
    char t;
    int id;
    
    while (q--) {
        cin >> t >> id;
        
        if (t == 'L') {
            left_deque.push_front(id);
            position_map[id] = -1 * left_deque.size(); // Negative index for left_deque
        } else if (t == 'R') {
            right_deque.push_front(id);
            position_map[id] = right_deque.size(); // Positive index for right_deque
        } else if (t == '?') {
            int left_index = -1 * position_map[id]; // Convert negative to positive
            int right_index = position_map[id];
            results.push_back(min(left_index, right_index));
        }
    }
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
