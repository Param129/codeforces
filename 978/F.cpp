#include <bits/stdc++.h>
using namespace std;

signed main() {
    long long n, k;
    cin >> n >> k;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
    }

    set<pair<long long,long long>>st;
    for(long long i=0;i<n;i++){
        st.insert({a[i],i});
    }

    vector<long long>ans(n);

    long long inleft=0;
    pair<long long,long long>prev={0,0};

    for(auto it:st){
        if(prev.first==it.first){
            ans[it.second]=ans[prev.second];
        }
        else{
            ans[it.second]=inleft;
        }
        prev=it;
        inleft++;
    }

    for(long long i=0;i<k;i++){
        long long x,y;
        cin>>x>>y;
        x--;
        y--;

        if(a[x]>a[y]){
            ans[x]--;
        }
        if(a[x]<a[y]){
            ans[y]--;
        }
    }

    for (long long i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
