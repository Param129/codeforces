#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n,len,start;//n - size of array , len - length of max consecutive subsequence , start - starting # in this max consecutive subsequence
map<int,int>dp;//map DS to store the DP values
vi ans;//the indices corresponding to the elements in the max consecutive subsequence
int main()
{
    fast;
    cin>>n;
    vi a(n);
    for (int i = 0;i<n;i++)cin>>a[i];//Input

    for (int i = 0;i<n;i++){
        int x = a[i];
        dp[x] = max(dp[x],1);//in case dp[x] is not encountered before set it initially to 1 because {x} is a consecutive subsequence - base case
        dp[x] = max(dp[x],dp[x - 1] + 1);//recursive case
        if (dp[x] > len){//if we have found a longer consecutive subsequence
            len = dp[x];
            start = x - dp[x] + 1;//this subsequence will be {x - len + 1,x - len,...,x} because this subsequence is consecutive and has len # of elements
        }
    }

    for (int i = 0;i<n;i++){
        if (a[i] == start){//always choose the first index with value = current element in the longest subsequence
            ans.push_back(i + 1);//1 based indexing
            start++;//start refers to the current element in the subsequence which needs to be added to the answer array
        }//greedily choose the indices
    }

    cout<<len<<'\n';
    for (auto it:ans)cout<<it<<" ";
    return 0;
}