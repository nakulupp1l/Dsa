#include<iostream>
#include<vector>
#include<stack>
#include<map>
#include<algorithm>
using namespace std;
vector<vector<string>> GA(vector<string>& str){
	map<string,vector<string>> Mp;
	for(auto i:str){
		string s=i;
		sort(s.begin(),s.end());
		Mp[s].push_back(i);
	}
	vector<vector<string>> ans;
	for(auto i=Mp.begin();i!=Mp.end();++i){
		ans.push_back(i->second);
	}
	return ans;
}
int main(){
	vector<string> str={"eat","tan","tea","ate","bat"
	};
	vector<vector<string>> ans=GA(str);
	for(auto i:ans){
		vector<string> a=i;
		for(auto j:a){
			cout<<j<<" ";
		}
		cout<<endl;
	}
    return 0;
}
