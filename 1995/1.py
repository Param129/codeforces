#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    ll budget;
    cin >> n >> budget;

    vector<ll> petals(n), quantity(n);
    for (int i = 0; i < n; ++i) {
        cin >> petals[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> quantity[i];
    }

    // Create a map to store petals as key and quantity as value
    map<ll, ll> pq_map;
    for (int i = 0; i < n; ++i) {
        pq_map[petals[i]] = quantity[i];
    }

    ll max_profit = 0;
    ll curr_budget = budget;

    // Iterate over the map to find maximum petals
    for (auto it = pq_map.begin(); it != pq_map.end(); ++it) {
        ll price = it->first;
        ll curr_qty = it->second;
        ll next_qty = 0;

        if (pq_map.find(price + 1) != pq_map.end()) {
            next_qty = pq_map[price + 1];
        }

        // Calculate how many flowers we can buy at the current price
        ll buy_price = min(curr_qty, curr_budget / price);
        ll rem_budget = curr_budget - buy_price * price;
        ll buy_next = 0;

        if (next_qty > 0) {
            buy_next = min(next_qty, rem_budget / (price + 1));
            rem_budget -= buy_next * (price + 1);
        }

        max_profit = max(max_profit, buy_price * price + buy_next * (price + 1));

        // Additional adjustment for the case where we might be able to buy more with remaining budget
        ll left_next = next_qty - buy_next;
        ll left_budget = rem_budget;
        ll adjust = min(min(buy_price, left_budget), left_next);
        buy_price -= adjust;
        buy_next += adjust;

        max_profit = max(max_profit, buy_price * price + buy_next * (price + 1));
    }

    cout << max_profit << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
