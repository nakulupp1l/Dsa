#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class heap{
	public:
		int *arr;
		int size;
		heap();
		heap(int x);
		void insert(int x);
		void print();
		int del();
		void heapify(int x);
};
heap::heap(){
	size=0;
	arr[0]=-1;
}
heap::heap(int n){
	size=0;
	arr=new int[n+1];
	arr[0]=-1;
}
void heap::insert(int x){
	size+=1;
	arr[size]=x;
	int i=size;
	while(i>1){
		int parenti=i/2;
		if(arr[i]<arr[parenti]){
			swap(arr[i],arr[parenti]);
			i=parenti;
		}
		else{
			break;
		}
	}
}
void heap::print(){
	for(int i=1;i<=size;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int heap::del(){
	int x=arr[1];
	arr[1]=arr[size];
	size--;
	int i=1;
	while(2*i <=size){
		int m=2*i;
		if(m+1<=size){
			m=(arr[m]>arr[m+1])?m:m+1;
		}
		if(arr[i]<arr[m]){
			break;
		}
		else{
			swap(arr[i],arr[m]);
			i=m;
		}
	}
	return x;
}
void heap::heapify(int i){
	int req;
	int l=2*i,r=l+1;
	if(l<=size){
		req=l;
		if(r<=size){
			req=(arr[req]<arr[r])?req:r;
		}
		
		if(arr[i]<=arr[req]) return;
		else{
			swap(arr[i],arr[req]);
			heapify(req);
		}
	}
}




class Heap{
	public:
		int *arr;
		int size;
		Heap();
		Heap(int x);
		void insert(int x);
		void print();
		int del();
		void heapify(int i,int n);
		void heapsort(int n);
};
Heap::Heap(){
	size=0;
	arr[0]=-1;
}
Heap::Heap(int n){
	size=0;
	arr=new int[n+1];
	arr[0]=-1;
}
void Heap::insert(int x){
	size+=1;
	arr[size]=x;
	int i=size;
	while(i>1){
		int parenti=i/2;
		if(arr[i]>arr[parenti]){
			swap(arr[i],arr[parenti]);
			i=parenti;
		}
		else{
			break;
		}
	}
}
void Heap::print(){
	for(int i=1;i<=size;++i){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int Heap::del(){
	int x=arr[1];
	arr[1]=arr[size];
	size--;
	int i=1;
	while(2*i <=size){
		int m=2*i;
		if(m+1<=size){
			m=(arr[m]>arr[m+1])?m:m+1;
		}
		if(arr[i]>arr[m]){
			break;
		}
		else{
			swap(arr[i],arr[m]);
			i=m;
		}
	}
	return x;
}
void Heap::heapify(int i,int n){
	int req;
	int l=2*i,r=l+1;
	if(l<=n){
		req=l;
		if(r<=n){
			req=(arr[req]>arr[r])?req:r;
		}
		
		if(arr[i]>=arr[req]) return;
		else{
			swap(arr[i],arr[req]);
			heapify(req,n);
		}
	}
}
void Heap::heapsort(int n){
	while(n!=1){
		swap(arr[n],arr[1]);
		n--;
		heapify(1,n);
	}
}


int main(){
	//heap h;
	Heap h;
	h.insert(100);
	h.insert(102);
	h.insert(69);
	h.insert(1);
	h.insert(60);
	h.insert(45); 
	h.insert(10);
	h.insert(50);
//	h.print();
//	h.heapify(3);
//	h.print();
//	h.del();
//	h.print();
//	h.del();
//	h.print();
//	h.del();  
	//build heap  https://naukri.com/code360/problems/build-heap_975375?leftPanelTabValue=SUBMISSION
	h.heapsort(h.size);
	h.print();
    return 0;
}
