#include <iostream>
#include <vector>
#include <climits>

using namespace std;

struct Attack {
    int damage;
    int cooldown;
};

vector<int> dp;

int minTurns(int health, vector<Attack>& attacks) {
    if (health <= 0) return 0;
    if (dp[health] != -1) return dp[health];
    
    int min_turns = INT_MAX;
    for (auto& attack : attacks) {
        if (attack.damage >= health) {
            min_turns = min(min_turns, 1);
        } else {
            int next_health = health - attack.damage;
            int next_turns = minTurns(next_health, attacks);
            next_turns += attack.cooldown;
            min_turns = min(min_turns, next_turns);
        }
    }
    
    return dp[health] = min_turns;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int h, n;
        cin >> h >> n;
        
        vector<Attack> attacks(n);
        for (int j = 0; j < n; ++j) {
            cin >> attacks[j].damage;
        }
        for (int j = 0; j < n; ++j) {
            cin >> attacks[j].cooldown;
        }
        
        // Initialize DP array with -1
        dp.assign(h + 1, -1);

        // Calculate minimum turns for this test case
        int turns = minTurns(h, attacks);
        cout << turns << endl;
    }

    return 0;
}
