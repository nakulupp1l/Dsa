//hello
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
	//base case
	if(str.length()==0) {
	 	root->isTerminal=1;
	 	return;
	}
	//main code
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
	//recursion sambhal legga
	insertw(child,str.substr(1));
}

bool search(Trie* root,string word){
	if(word.length()==0) return root->isTerminal;
	
	char ch=word[0];
	int i=ch-'a';
	Trie* child;
	if(root->children[i]!=NULL){
		child=root->children[i];
	}
	else return 0;
	return search(child,word.substr(1));
}

void delw(Trie* root,string str){
	//base case
	if(str.length()==0) {
	 	root->isTerminal=0;
	 	return;
	}
	//main code
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
	//recursion sambhal legga
	delw(child,str.substr(1));
}
int main(){
	Trie* root=new Trie('-');
	insertw(root,"coding");
	insertw(root,"code");
	delw(root,"coding");
	cout<<search(root,"coding")<<" "<<search(root,"codin");
    return 0;
}
