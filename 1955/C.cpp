#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;

    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);
        
        long long sum=0;
        for(long long i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        if(sum<=k){
            cout<<n<<endl;
        }
        else{
            long long ans=0;
            if(k%2==0){
                long long half=k/2;
                long long rem=half;

                for(long long i=0;i<n;i++){
                    if(a[i]<=rem){
                        rem-=a[i];
                        ans++;
                    }
                    else{
                        break;
                    }
                }

                rem=half;

                for(long long i=n-1;i>=0;i--){
                    if(a[i]<=rem){
                        ans++;
                        rem-=a[i];
                    }
                    else{
                        break;
                    }
                }
            }
            else{
                long long half=k/2;
                long long rem=half+1;

                for(long long i=0;i<n;i++){
                    if(a[i]<=rem){
                        rem-=a[i];
                        ans++;
                    }
                    else{
                        break;
                    }
                }

                rem=half;

                for(long long i=n-1;i>=0;i--){
                    if(a[i]<=rem){
                        ans++;
                        rem-=a[i];
                    }
                    else{
                        break;
                    }
                }  
            }
            cout<<ans<<endl;
        }

    }
return 0;
}