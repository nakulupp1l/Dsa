#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
void frequency(string s){
	unordered_map<char,int>mp;
	for(auto i:s){
		mp[i]++;
	}
	for(auto i:mp){
		cout<<i.first<<"  "<<i.second<<endl;
	}
}
int main(){
	//print frequency of each character
	string s="thiruvananthapuran";
	frequency(s);
    return 0;
}
