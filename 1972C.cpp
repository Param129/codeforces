#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll t,n;
ll res=0;
 
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		res=0;
		vector<ll> v(n);
		map<vector<ll>,ll> ab,ac,bc,abc;
		for(int i=0;i<n;i++) cin>>v[i];
		for(int i=2;i<n;i++)
		{
			ll a = v[i-2],b=v[i-1],c= v[i];
			res+=ab[{a,b}]+ac[{a,c}]+bc[{b,c}]-3*abc[{a,b,c}];
			ab[{a,b}]++;
			ac[{a,c}]++;
			bc[{b,c}]++;
			abc[{a,b,c}]++;
		}
		cout<<res<<"\n";
	}
	return 0;
}