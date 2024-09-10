#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
	//my soln see leetcode
	
	//by sir;
	string ans;
	vector<string> s={"flower","flow","fluid"};
	int j=0;
	while(1){
		char c=0;
		for(int i=0;i<s.size();++i){
			if(c==0){
				c=s[i][j];
			}
			else{
				if(s[i][j]!=c){
					c=0;
					break;
				}
			}
		}
		if(c==0){
			break;
		}
		ans.push_back(c);
		++j;
	}
	cout<<ans<<endl;
    return 0;
}
