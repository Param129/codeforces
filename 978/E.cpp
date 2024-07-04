#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int current_passengers = 0;
    int mn = 0;
    int mx = 0;
    
    for (int i = 0; i < n; ++i) {
        current_passengers += a[i];
        if (current_passengers < 0) {
            mn = max(mn,-current_passengers);
        }
        else{
            mx =max(mx,current_passengers);
        }
    }
    
    mx=w-mx;
    if(mx-mn+1 <0)cout<<0;
    else cout<<mx-mn+1;
    
    return 0;
}
