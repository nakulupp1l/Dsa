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



void store(Trie* curr,vector<string>&temp,string &prefix){
	if(curr->isTerminal){
		temp.push_back(prefix);
	}
	for(char ch='a';ch<='z';++ch){
		int in=ch-'a';
		Trie* next=curr->children[in];
		if(next){
			prefix.push_back(ch);
			store(next,temp,prefix);
			prefix.pop_back();
		} 
	}
}
vector<vector<string>>helper(Trie* root,string input){
	Trie* prev=root;
	vector<vector<string>>ans;
	string prefix="";
	for(int i=0;i<input.length();++i){
		char lastc=input[i];
		int index=lastc-'a';
		Trie* curr=prev->children[index];
		if(curr==NULL) break;
		else{
			vector<string>temp;
			prefix.push_back(lastc);
			store(curr,temp,prefix);
			ans.push_back(temp);
			prev=curr;
		}
	}
	return ans;
}
int main(){
	Trie* root=new Trie('-');
	insertw(root,"coding");
	insertw(root,"code");
	delw(root,"coding");
	cout<<search(root,"coding")<<" "<<search(root,"codin");
    
    Trie* r=new Trie('/');
	vector<string>v={"code","coding","coder","chmoding","classic","coal"};
	string input="cl";
	for(auto i:v){
		insertw(r,i);
	}
	vector<vector<string>>ans=helper(r,input);
	cout<<endl<<endl<<endl;
	for(int i=0;i<ans.size();++i){
		for(int j=0;j<ans[i].size();++j){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
