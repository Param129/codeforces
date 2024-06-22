#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, W;
        cin >> n >> W;
        
        vector<int> widths(n);
        map<int, int> widthCount;
        
        for(int i = 0; i < n; ++i) {
            cin >> widths[i];
            widthCount[widths[i]]++;
        }
        
        int height = 0;
        
        while(n > 0) {
            int currentWidth = W;
            
            for(auto it = widthCount.rbegin(); it != widthCount.rend(); ++it) {
                int w = it->first;
                while(it->second > 0 && w <= currentWidth) {
                    currentWidth -= w;
                    it->second--;
                    n--;
                }
            }
            
            height++;
        }
        
        cout << height << endl;
    }
    
    return 0;
}
