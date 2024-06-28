#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool canCollect(int xi, int yi) {
    // Eight possible directions of movement
    vector<pair<int, int>> directions = {
        {0, 1}, {1, 1}, {1, 0}, {1, -1},
        {0, -1}, {-1, -1}, {-1, 0}, {-1, 1}
    };

    // Check if we can reach (xi, yi)
    for (auto& dir : directions) {
        int x = 0, y = 0;
        int steps = 0;
        while (true) {
            if (x == xi && y == yi) {
                return true;
            }
            if (steps > 50) {  // if it's more than 50 steps, it's not possible
                break;
            }
            x += dir.first;
            y += dir.second;
            steps++;
            yi--;  
        }
    }
    
    return false;
}

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> coins(n);
    for (int i = 0; i < n; ++i) {
        int xi, yi;
        cin >> xi >> yi;
        coins[i] = {xi, yi};
    }
    
    // Check collectibility for each coin
    for (auto& coin : coins) {
        int xi = coin.first;
        int yi = coin.second;
        
        // if (canCollect(xi, yi)) {
        //     cout << "YES" << endl;
        // } else {
        //     cout << "NO" << endl;
        // }

        if(yi<-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}
