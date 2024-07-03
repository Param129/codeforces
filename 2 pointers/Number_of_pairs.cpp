/*
You are given an array a
 of n
 integers. Find the number of pairs (i,j)
 (1≤i<j≤n
) where the sum of ai+aj
 is greater than or equal to l
 and less than or equal to r
 (that is, l≤ai+aj≤r
).

For example, if n=3
, a=[5,1,2]
, l=4
 and r=7
, then two pairs are suitable:

i=1
 and j=2
 (4≤5+1≤7
);
i=1
 and j=3
 (4≤5+2≤7
).
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long ans,e,n,s,i,l,r;
     cin>>e;
     while(e--)
     {
        cin>>n>>l>>r;
        vector<long long>a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
        
        sort(a.begin(),a.end());
        ans=0;
        for(i=0;i<n-1;i++)
        {
             auto itr1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);
             auto itr2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);
             ans+=(itr2-itr1);
        }
        cout<<ans<<"\n";
     }
}
