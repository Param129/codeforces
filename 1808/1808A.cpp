#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;

        int ans = -1; // Initialize ans to indicate no valid number found
        int mx = -1;  // Initialize mx to a very small value

        for(int i = l; i <= r; i++){
            int number = i;
            int min_digit = 9; // Initialize min_digit to a large value
            int max_digit = 0; // Initialize max_digit to a small value

            while(number > 0){
                int digit = number % 10;
                min_digit = min(min_digit, digit);
                max_digit = max(max_digit, digit);
                number /= 10;
            }

            int luc = max_digit - min_digit;
            if(luc == 9){
                ans = i;
                break; // Found the desired number, no need to continue
            }
            else{
                if(mx < luc){
                    mx = luc;
                    ans = i;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
