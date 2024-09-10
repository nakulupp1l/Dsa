#include<iostream>
#include<vector>
#include<stack>
using namespace std;
bool iso(string s,string t){
	if(s.length()!=t.length()){
		return 0;
	}
	int i=0;
	while(i<s.length()){
		if(s.find(s[i],i+1)!=string::npos&&t.find(t[i],i+1)!=string::npos){
			if(s.find(s[i],i+1)!=t.find(t[i],i+1)){
				return 0;
			}
		}
		else{
			i++;
		}
	}
	return 0;
}
int main(){
	cout<<iso("egg","add")<<endl;
    return 0;
}
