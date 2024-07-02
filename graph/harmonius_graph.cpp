#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> vis;
vector<pair<int, int>> v;

void dfs(int i, int &mn, int &mx) {
    vis[i] = 1;
    mn = min(mn, i);
    mx = max(mx, i);
    for (auto it : adj[i]) {
        if (!vis[it]) {
            dfs(it, mn, mx);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    adj.resize(n + 1);
    vis.resize(n + 1, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            int mn = i, mx = i;
            dfs(i, mn, mx);
            v.push_back({mn, mx});
        }
    }

    sort(v.begin(), v.end());

    int cnt = 0;
    int mini = v[0].first, maxi = v[0].second;

    for (int i = 1; i < v.size(); i++) {
        if (v[i].first > maxi) {
            mini = v[i].first;
            maxi = v[i].second;
        } else {
            cnt++;
            maxi = max(maxi, v[i].second);
        }
    }

    cout << cnt << endl;

    return 0;
}
