# define fvgbhjn vfgbhj
#define xdcfvgbh 6789


#include<bits/stdc++.h>
using namespace std;

int findlast(int n) {
    int i = 1;
    int cnt = 1;
    while (i < n) {
        i = 2 * i;
        cnt++;
    }
    return cnt;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        int n = findlast(x);
        vector<int> a(32, 0); // Initialize with 0s and size 32

        for (int i = 0; i < 33-1; i++) {
            int n = x & (1 << i);
            a[i] = ((n > 0) ? 1 : 0);
        }

        for (int i = 0; i <=30; i++) {
            if (a[i] == 1 && i + 1 <= 30 && a[i + 1] == 1) {
                int j = i + 1;
                while (j <= 30 && a[j] == 1) {
                    j++;
                }
                a[i] = -1;
                for (int k = i + 1; k < j; k++) {
                    a[k] = 0;
                }
                if (j < 31) {
                    a[j] = 1;
                }
                i = j - 1; // Move the index to the position of the last processed bit
            }
        }

        // Find the actual length of the modified sequence
        int actual_length = 0;
        for (int i = 31; i >= 0; i--) {
            if (a[i] != 0) {
                actual_length = i + 1;
                break;
            }
        }

        cout << actual_length << endl;
        for (int i = 0; i < actual_length; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
