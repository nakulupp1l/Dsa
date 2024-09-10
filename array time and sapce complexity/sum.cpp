#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
	int carry=0,x,i=0;
	vector<int>a{1,2,3};
	vector<int>b{1,8,9,3,4};
	string ans;
	int n1=a.size();
	int n2=b.size();
	while(n1-->0&&n2-->0){
		x=(a[n1]+b[n2]+carry)%10;
		ans.push_back(x+'0');
	//	cout<<ans<<endl;
		carry=(a[n1]+b[n2])/10;
	}
	while(n1-->0){
		x=a[n1]+carry;
		ans.push_back(x+'0');
		carry=0;
	}
	while(n2-->0){
		x=b[n2]+carry;
		ans.push_back(x+'0');
		carry=0;
	}
	reverse(ans.begin(),ans.end());
	cout<<ans;
	return 0;
}