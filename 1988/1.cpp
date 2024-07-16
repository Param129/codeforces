#include<bits/stdc++.h>
using namespace std;

int cntdig(int n) {
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

int revNum(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

bool checkNumPalindrome(int n) {
    return n == revNum(n);
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

void printAllDivisor(int n) {
    for(int i = 1; i <= sqrt(n); i++) {
        if(n % i == 0) {
            if(n / i == i) cout << i << " ";
            else cout << i << " " << n / i << " ";
        }
    }
    cout << endl;
}

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i += 6) {
        if(n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
      int n, k;
        cin >> n >> k;

        // Priority queue to keep track of the largest numbers
        priority_queue<int,vector<int>,greater<int>> pq;
        pq.push(n);

        int operations = 0;

        if(n==1){
            cout<<0<<endl;
            continue;
        }

        k=k-(4-3);
        while (n>=2) {
            // int current = pq.top();
            // pq.pop();

            // // If current is already 1, we continue
            // if (current == 1) {
            //     continue;
            // }

            // // Increment the number of operations
           

            // // If the current value is less than or equal to k, we need `current` operations to make all 1's
            // if (current == k) {
            //     operations++;
            // } else {
            //      operations++;
            //     // Split current into k and (current - k)
            //     pq.push(k);
            //     pq.push(current - k);
            // }

            n=n-k;
            operations++;
        }

        cout << operations << endl;
    }
    return 0;
}