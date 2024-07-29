#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

void solve() {
	ll n;
	cin >> n;

	ll arr[n];
	for(ll i = 0; i < n; i++) cin >> arr[i];

	map<ll, ll> freq;
	for(auto i : arr) freq[i]++;

	vector<ll> ans;
	for(auto i : freq) {
		if(i.second > 1) ans.push_back(i.first);
	}

	if(ans.size() < 2) {
		cout << "-1" << '\n';
		return;
	}

	for(auto i : arr) {
		if(i == ans[0]) {
			ans[0] = -1;
			cout << "2" << " ";
		} else if(i == ans[1]) {
			ans[1] = -1;
			cout << "3" << " ";
		} else cout << "1" << " ";
	}

	cout << '\n';

}

int main() {
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}