#include <iostream>
using namespace std;

bool isLuckyDigit(char d) {
    return (d == '4' || d == '7');
}

bool isNearlyLucky(long long n) {
    int luckyCount = 0;
    
    // Count lucky digits (4 or 7) in the number
    while (n > 0) {
        int digit = n % 10;
        if (isLuckyDigit(digit + '0')) {
            luckyCount++;
        }
        n /= 10;
    }
    
    // Check if the count of lucky digits is a lucky number (4 or 7)
    return (luckyCount == 4 || luckyCount == 7);
}

int main() {
    long long n;
    cin >> n;
    
    if (isNearlyLucky(n)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    
    return 0;
}
