#include<bits/stdc++.h>
using namespace std;
int n,i,x[100000],y[100000],c;
int main()
{
cin>>n;
for (i=0;i<n;i++)
{
cin>>x[i];
y[i]=x[i];
}
for (i=n-2;i>=0;i--)
     y[i]=min(y[i+1],x[i]);

for (i=0;i<n;i++)
{
	int* c=lower_bound(y+i+1,y+n,x[i]);
	if (c-y-1==i)
       cout<<-1<<" ";
	else
	   cout<<c-y-2-i<<" ";
	
}
}
 