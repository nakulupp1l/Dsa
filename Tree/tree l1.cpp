#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class Tree{
	public:
		int val;
		Tree* left;
		Tree* right;
		Tree(int x){
			left=NULL;
			right=NULL;
			val=x;
		}
};

Tree* create(){
	int x;
	//cout<<"enter value ";
	cin>>x;
	if(x==-1) return NULL;
	Tree* root=new Tree(x);
	cout<<"left of "<<x<<" ";
	root->left=create();
	cout<<"right of "<<x<<" ";
	root->right=create();
	return root;
}

void Level_order_traversal(Tree* node){
	queue<Tree*>q;
	if(node)
	q.push(node);
	q.push(NULL);
	while(!q.empty()){
		if(q.front()==NULL){
			cout<<endl;
			q.pop();
			if(!q.size()) return;
			q.push(NULL);
		} 
		cout<<q.front()->val<<" ";
		if(q.front()->left) q.push(q.front()->left);
		if(q.front()->right) q.push(q.front()->right);
		q.pop();
	}
}

void inorder(Tree* root){
	if(root){
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);}
}
void preorder(Tree* root){
	if(root){
	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);}
}
void postorder(Tree* root){
	if(root){
	postorder(root->left);
	postorder(root->right);
	cout<<root->val<<" ";
	}
}
int main(){
	Tree* root=create();
	Level_order_traversal(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	postorder(root);
    return 0;
}
