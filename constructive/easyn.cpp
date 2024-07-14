#include <iostream>
#include <vector>
#include <cmath>
#include <map>
using namespace std;

const long long mod = 1073741824;

long long count_divisors(long long n) {
    long long count = 0;
    for (long long i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            if (i == n / i)  
                count++;
            else  
                count += 2;
        }
    }
    return count;
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    map<long long, long long> mp;

    long long sum = 0;

    for (long long i = 1; i <= a; ++i) {
        for (long long j = 1; j <= b; ++j) {
            for (long long k = 1; k <= c; ++k) {
                long long product = ((i * j) % mod * k) % mod;
                long long d;

                if (mp.find(product) != mp.end()) {
                    d = mp[product];
                } else {
                    d = count_divisors(product);
                    mp[product] = d;
                }

                sum = (sum + d) % mod;
            }
        }
    }

    cout << sum << endl;

    return 0;
}
