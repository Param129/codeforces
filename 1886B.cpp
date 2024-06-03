#include<bits/stdc++.h>
using namespace std;

double dist(int a,int b,int c,int d){
    return sqrt((a-c)*(a-c) + (b-d)*(b-d));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        double px,py,ax,ay,bx,by;
       cin>>px>>py>>ax>>ay>>bx>>by;
		double a=sqrt(ax*ax+ay*ay),b=sqrt(bx*bx+by*by),c=sqrt((ax-px)*(ax-px)+(ay-py)*(ay-py)),d=sqrt((bx-px)*(bx-px)+(by-py)*(by-py));
		double r=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by))/2.0;
		double x=max(a,c),y=max(b,d),z=max({r,a,d}),z2=max({r,b,c});
		double ans=min({x,y,z,z2});
		printf("%.7lf\n",ans);
    }
return 0;
}