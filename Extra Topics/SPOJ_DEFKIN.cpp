#include<iostream>
#include<vector>
#include<stack>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,x,y;
	cin>>x>>y>>n;
	vector<int>r;
	vector<int>c;
	
	for(int i=0;i<n;++i){
		int a,b;
		cin>>a>>b;
		r.push_back(a);
		c.push_back(b);
	}
	r.push_back(x);
	c.push_back(y);
	sort(r.begin(),r.end());
	sort(c.begin(),c.end());
	int max_a=INT_MIN,max_b=INT_MIN;
	int prev=0;
	for(int i=0;i<r.size();++i){
		max_a=max(max_a,r[i]-prev-1);
		prev=r[i];
	}
	prev=0;
	for(int i=0;i<c.size();++i){
		max_b=max(max_b,c[i]-prev-1);
		prev=c[i];
	}
	cout<<"Answer :"<<max_a*max_b;
    return 0;
}
