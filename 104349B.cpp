#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, m;
        cin >> n >> m;

        // Compute the last digit of n
        long long lastDigitOfN = n % 10;
        // Compute the product's last digit with 245^m which always ends in 5
        long long resultLastDigit = (lastDigitOfN * 5) % 10;
        if(m==0){
            cout<<(lastDigitOfN ) % 10<<endl;
        }
        else
        cout << resultLastDigit << endl;
    }
    return 0;
}
