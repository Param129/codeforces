#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Find the minimum of the maximum values of all adjacent pairs
    int min_of_max_adjacent = INT_MAX;
    for(int i = 0; i < n - 1; ++i) {
        int max_adjacent = max(a[i], a[i + 1]);
        min_of_max_adjacent = min(min_of_max_adjacent, max_adjacent);
    }

    // The maximum k Alice is guaranteed to win is (min_of_max_adjacent - 1)
    int max_k = min_of_max_adjacent - 1;

    cout  << max_k << endl;


    }
return 0;
}