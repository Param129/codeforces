#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }

    long long time = 0;
    int current_position = 1;

    for (int i = 0; i < m; ++i) {
        int destination = a[i];

        if (destination >= current_position) {
            time += destination - current_position;
        } else {
            time += n - current_position + destination;
        }

        current_position = destination;
    }

    cout << time << endl;

    return 0;
}
