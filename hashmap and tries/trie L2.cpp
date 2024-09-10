#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Trie{
	public:
		char data;
		Trie* children[26];
		bool isTerminal;
		Trie(char d);
};
Trie::Trie(char d){
	data=d;
	for(int i=0;i<26;i++){
		children[i]=NULL;
	}
	isTerminal=0;
}
void insertw(Trie* root,string str){
	if(str.length()==0) {
	 	root->isTerminal=1;
	 	return;
	}
	
	char ch=str[0];
	int i=ch-'a';
	Trie* child;
	if(root->children[i]!=NULL){
		child=root->children[i];
	}
	else{
		child=new Trie(ch);
		root->children[i]=child;
	}
	
	insertw(child,str.substr(1));
}
int main(){
	Trie* root=new Trie('-');
	insertw(root,"coding");
	insertw(root,"code");
    return 0;
}
