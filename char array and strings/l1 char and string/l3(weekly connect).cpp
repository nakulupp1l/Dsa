#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
bool cmp(char a,char b){
	return a>b;}
int main(){
	string s="nakul";
	//sort(s.begin(),s.end());
	sort(s.begin(),s.end(),cmp);
	cout<<s<<endl;
	
	//try help ramu
    return 0;
}
