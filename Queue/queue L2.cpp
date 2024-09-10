#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void print(queue<int>q){
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}
//using stack
void reverse(queue<int>&q){
	stack<int>s;
	while(!q.empty()){
	s.push(q.front());
	q.pop();	
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
}
//using recursion
void revrec(queue<int>&q){
	if(q.empty()) return;
	int x=q.front();
	q.pop();
	revrec(q);
	q.push(x);
}

//q2 reverse k elements
void krev(queue<int>&q,int k){
	if(k==0) return;
	stack<int> s;
	int count=0,n=q.size();
	while(!q.empty()){
		s.push(q.front());
		q.pop();
		count++;
		if(count==k) break;
	}
	while(!s.empty()){
		q.push(s.top());
		s.pop();
	}
	count=0;
	while(!q.empty()){
		if(count>=n-k) break;
		q.push(q.front());
		q.pop();
		count++;
		
	}
}

//q3 interleaving first and second half of arr
vector<int> rearrangeQueue(queue<int> &q){
    vector<int>ans;
    queue<int>s;
    int c=q.size();
    c=(c&1)?(c/2+1):c/2;
    // for change in queue see coding ninja code written
    while(c--){
        s.push(q.front());
        q.pop();
    }
    while(1){
        if(s.empty()) break;
        ans.push_back(s.front());
        s.pop();
        if(q.empty()) break;
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}

//first negetive element for k elements
vector<int> firstNegative(vector<int> arr, int n, int k) {
	vector<int>ans;
	queue<int>q;
	for(int i=0;i<k;++i){
		if(arr[i]<0) q.push(i);
	}
	int j=k;
	while(j<n+1){
		if(q.empty()) ans.push_back(0);
		else ans.push_back(arr[q.front()]);

		while(!q.empty() && (j-q.front()>=k)){
			q.pop();
		}
		if(j<n &&arr[j]<0) q.push(j);
		j++;
	}
	return ans;
}
    
int main(){
	queue <int>q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	print(q);
	revrec(q);
	print(q);
	reverse(q);
	print(q);
	krev(q,0);
	print(q);
    return 0;
}
