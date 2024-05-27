#include<bits/stdc++.h>
using namespace std;
bool mycomp(const pair<int, int>& a, const pair<int, int>& b) {
	if(a.first!=b.first) return b.first>a.first;
    return a.second > b.second; // Sort in descending order of second element
}
int main(){
string s; cin>>s;
		int n = s.size();
		vector<int>score(n,0);
		for(int i=1;i<n;i++){
			score[i]=score[i-1]+((s[i-1]==')')? -1 : 1);
		}
		vector<pair<int,int>>pr;
		for(int i=0;i<n;i++) pr.push_back(make_pair(score[i],i));
		sort(pr.begin(),pr.end(),mycomp);
		for(int i=0;i<n;i++){
			cout<<s[pr[i].second];
		}
}
