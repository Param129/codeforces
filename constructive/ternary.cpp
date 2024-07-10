#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to convert a decimal number to ternary
vector<int> toTernary(int n) {
    if (n == 0) return {0};
    vector<int> ternary;
    while (n > 0) {
        ternary.push_back(n % 3);
        n /= 3;
    }
    reverse(ternary.begin(), ternary.end());
    return ternary;
}

int main() {
    int a, c;
    cin >> a >> c;
    
    // Convert a and c to ternary
    vector<int> ternaryA = toTernary(a);
    vector<int> ternaryC = toTernary(c);
    
    // Ensure ternaryA and ternaryC have the same length
    int lenA = ternaryA.size();
    int lenC = ternaryC.size();
    if (lenA < lenC) {
        ternaryA.insert(ternaryA.begin(), lenC - lenA, 0);
    } else if (lenC < lenA) {
        ternaryC.insert(ternaryC.begin(), lenA - lenC, 0);
    }
    
    // Calculate b such that a tor b = c
    vector<int> ternaryB;
    for (int i = 0; i < ternaryA.size(); ++i) {
        int digitB = (ternaryC[i] + 3 - ternaryA[i]) % 3; // Calculating b[i]
        ternaryB.push_back(digitB);
    }
    
    // Convert ternaryB to decimal
    int b = 0;
    for (int digit : ternaryB) {
        b = b * 3 + digit;
    }
    
    cout << b << endl;
    
    return 0;
}
