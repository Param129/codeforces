


#include <bits/stdc++.h>
#define int long long int
using namespace std;
void solve() {
	
	int n,k;
	cin>>n>>k;
	
	int a[n];
	vector<vector<int>>adj(n+1);
	// int order[n+1];
	// memset(order,0,sizeof(order));
    vector<int>order(n+1,0);
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		for(int j=1;j<n-1;j++){
			adj[a[j]].push_back(a[j+1]);
			order[a[j+1]]++;
		}
	}
	queue<int>q;
	for(int i=1;i<=n;i++)
	{
		if(order[i]==0)
			q.push(i);
	}
	int ans=0;
	while(!q.empty())
	{

			int node = q.front();
			q.pop();
            ans++;
			for(int el:adj[node])
			{
				order[el]--;
				if(order[el]==0)
					q.push(el);
			}
			
	}
	if(ans == n)
	{
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
	
	
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int tests=1;
    cin >> tests;
    while (tests--) {
        solve();
    }
    return 0;
}