#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int64_t x, y, n;
    cin >> x >> y >> n;
    int64_t a = 0, b = 1;

    for (int i = 1; i <= n; ++i) {
        int64_t delta = abs((int64_t)x * i * b - (int64_t)a * i * y);

        // Calculate t1 and t2
        int64_t t1 = (double)x * i / y;
        int64_t t2 = t1 + 1;

        // Calculate td1 and td2
        int64_t td1 = abs((int64_t)t1 * b * y - (int64_t)x * i * b);
        int64_t td2 = abs((int64_t)t2 * b * y - (int64_t)x * i * b);

        if (td1 < delta)
            {delta = td1, a = t1, b = i;}
        if (td2 < delta)
            {delta = td2, a = t2, b = i;}
    }

    cout << a << "/" << b << endl;

    return 0;
}
