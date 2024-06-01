#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n, m, k;
        cin >> n >> m >> k;

        vector<long long> a(n), b(m);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (long long i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort(a.begin(), a.end()); // sort Jellyfish's apples
        sort(b.begin(), b.end()); // sort Gellyfish's apples in descending order

        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        if(k%2==1){
            long long x=sum;
            x=x-a[0];
            x=x+b[m-1];
            cout<<max(x,sum)<<endl;
        }
        else{


                // for even first swap for k==1 and second for k==2;
                if(b[m-1]>=a[0])swap(a[0],b[m-1]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                if(a[n-1]>=b[0])swap(a[n-1],b[0]);
                sort(a.begin(),a.end());
                sort(b.begin(),b.end());
                sum=0;
                for(int i=0;i<n;i++){
                    sum+=a[i];
                }
                cout<<sum<<endl;

        }
    }
    return 0;
}
