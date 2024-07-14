#include <iostream>
#include <algorithm>

using namespace std;

long long lcm(long long a, long long b) {
    return ((a *b )/ __gcd(a, b)) ;
}

int main() {
   long long n;
	cin >> n;
 
	if(n == 1) {
		cout << "1";
		return 0;
	}
 
	long long ans = n * (n - 1);
	for(long long i = n - 2; i >= 2; i--) {
		ans = max(ans, lcm(lcm(n, n - 1), i));
	}
 
	for(long long i = n - 3; i >= 2; i--) {
		ans = max(ans, lcm(lcm(n, n - 2), i));
	}
 
	for(long long i = n - 3; i >= 2; i--) {
		ans = max(ans, lcm(lcm(n - 1, n - 2), i));
	}
 
	cout << ans ;
}
