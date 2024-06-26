#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

            int cnt=0;
            int ans=0;
        sort(a.begin(),a.end());
        
        for(int i=0;i<101;i++){
            int st=0;
            int end=n-1;
            cnt=0;
            while(st<end){
                if(a[st]+a[end]==i){
                    cnt++;
                    st++;
                    end--;
                }
                else if(a[st]+a[end]>i){
                    end--;
                }
                else{
                    st++;
                }
            }

            if(cnt>ans){
                ans=cnt;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}
