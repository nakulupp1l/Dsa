#include<iostream>
#include<vector>
#include<stack>
#include<string.h>
using namespace std;
int main(){
	string s="anagram",t="nagaram";
	//using hash table 
	int fre[256]={0};
//	for(int i=0;i<256;++i){
//		fre[i]=0;
//	}
	int i=0;
	while(s[i]!='\0'){
		fre[(int)s[i]]++;
		i++;
	}
	i=0;
	while(t[i]!='\0'){
		fre[(int)t[i]]--;
		i++;
	}
	bool flag;
	for(int i=0;i<256;++i){
		flag=1;
		if(fre[i]!=0){
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
    return 0;
}
