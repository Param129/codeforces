#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Attack {
    long long damage;
    long long cooldown;
    long long nextTurn;

    bool operator<(const Attack& other) const {
        return nextTurn > other.nextTurn; // Min-heap based on nextTurn
    }
};

long long minTurnsToBeatBoss(long long health, vector<Attack>& attacks) {
    priority_queue<Attack> pq;
    long long turns = 0;

    for (Attack& attack : attacks) {
        attack.nextTurn = 0;
        pq.push(attack);
    }

    while (health > 0) {
        if (pq.empty()) {
            // If no attacks available and boss still has health, return -1 (impossible)
            return -1;
        }

        Attack attack = pq.top();
        pq.pop();

        if (attack.nextTurn > turns) {
            // Skip to next turn if attack is on cooldown
            turns = attack.nextTurn;
        } else {
            // Perform the attack and update the next turn
            health -= attack.damage;
            attack.nextTurn = turns + attack.cooldown;
            pq.push(attack);
        }
        
        turns++;
    }

    return turns;
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long h, n;
        cin >> h >> n;

        vector<Attack> attacks(n);
        for (long long i = 0; i < n; ++i) {
            cin >> attacks[i].damage;
        }
        for (long long i = 0; i < n; ++i) {
            cin >> attacks[i].cooldown;
        }

        cout << minTurnsToBeatBoss(h, attacks) << endl;
    }

    return 0;
}
