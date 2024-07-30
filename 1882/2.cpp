#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void generate_subsets(int index, const vector<set<int>>& sets, set<int>& current_union, int& max_size, const set<int>& union_all) {
    if (index == sets.size()) {
        if (current_union != union_all) {
            max_size = max(max_size, (int)current_union.size());
        }
        return;
    }

    // Include the current set
    set<int> temp_union = current_union;
    temp_union.insert(sets[index].begin(), sets[index].end());
    generate_subsets(index + 1, sets, temp_union, max_size, union_all);

    // Exclude the current set
    generate_subsets(index + 1, sets, current_union, max_size, union_all);
}

#define ll long long

void solve() 
{
	ll n;
	cin >> n;
 
	vector<vector<ll>> arr(n);
	set<ll> st;
	for(ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		for(ll j = 0; j < x; j++) {
			ll a;
			cin >> a;
			arr[i].push_back(a);
			st.insert(a);
		}
	}
 
	ll ans = 0;
 
	for(auto it : st) {
 
		set<ll> ss;
		for(auto i : arr) {
			bool f = true;
			for(auto j : i) {
				if(j == it) f = false;
			}
			if(f) {
				for(auto j : i) ss.insert(j);
			}
		}
 
		ans = max(ans, (ll)ss.size());
 
	}
 
	cout << ans << endl;
 
}
 
int main()
{
	// file();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t = 1;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}