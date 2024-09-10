#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
class BST{
	public:
		int data;
		BST* left;
		BST* right;
		BST(){
			left=NULL;
			right=NULL;
		}
		BST(int x){
			data=x;
			left=NULL;
			right=NULL;
		}
};
BST* insert(BST* root,int x){
	BST* node=new BST(x);
	if(!root){
		return node;
	}
	
	if(root->data>x){
		root->left=insert(root->left,x);
	}
	else{
		root->right=insert(root->right,x);
	}
	return root; 
	
//	while(1){
//		if(root->data>x){
//			if(root->left){
//				root=root->left;
//			}
//			else{
//				root->left=node;
//				break;
//			}
//		}
//		else{
//			if(root->right){
//				root=root->right;
//			}
//			else{
//				root->right=node;
//				break;
//			}
//		}
//	}
}
void input(BST* &root){
	int x;
	cin>>x;
	while(x!=-1){
		root=insert(root,x);
		cin>>x;
	}
}
void level_order(BST* node){
	queue<BST*>q;
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
		cout<<q.front()->data<<" ";
		if(q.front()->left) q.push(q.front()->left);
		if(q.front()->right) q.push(q.front()->right);
		q.pop();
	}
}
bool search(BST* root,int x){
	if(!root) return 0;
	if(root->data==x) return 1;
	if(root->data>x){
		return search(root->left,x);
	}
	return search(root->right,x);
}
BST* search1(BST* root,int x){
	if(!root) return root;
	if(root->data==x) return root;
	if(root->data>x){
		return search1(root->left,x);
	}
	return search1(root->right,x);
}

BST* mini(BST* root){
	if(!root) return NULL;
	if(!root->left) return root;
	return mini(root->left);
}
BST* maxi(BST* root){
	if(!root) return NULL;
	if(!root->right) return root;
	return maxi(root->right);
}

//left subtree must exist 
BST* predecessor(BST* root,int x){
	BST* node=search1(root,x);
	if(node->left){
		return maxi(node->left);
	}
	return node;
}
//right subtree must exist
BST* successor(BST* root,int x){
	BST* node=search1(root,x);
	if(node->right){
		return mini(node->left);
	}
	return node;
}

//delte
BST* deletion(BST* root,int target){
	
}
int main(){
	BST* root=NULL;
	input(root);
	level_order(root);
//	cout<<endl<<search(root,10)<<endl;
//	cout<<search(root,1000)<<endl;
//	cout<<mini(root)->data<<endl;
//	cout<<maxi(root)->data<<endl;
//	cout<<predecessor(root,17)->data<<endl;
//	cout<<successor(root,17)->data<<endl;
	
	//deletion
	deletion(root,20);
	cout<<endl;
	level_order(root);	
	return 0;
	}
