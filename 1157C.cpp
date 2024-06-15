#include <iostream>
#include <deque>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    deque<int> dq(a.begin(), a.end());
    string moves;
    int last = -1;

    while (!dq.empty()) {
        if ((dq.front() > last) && (dq.back() > last)) {
            if (dq.front() < dq.back()) {
                last = dq.front();
                dq.pop_front();
                moves += 'L';
            } else {
                last = dq.back();
                dq.pop_back();
                moves += 'R';
            }
        } else if (dq.front() > last) {
            last = dq.front();
            dq.pop_front();
            moves += 'L';
        } else if (dq.back() > last) {
            last = dq.back();
            dq.pop_back();
            moves += 'R';
        } else {
            break;
        }
    }

    cout << moves.size() << endl;
    cout << moves << endl;

    return 0;
}
