#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
//dont know why not working
bool isPossible(vector<int>v,int p,int mid){
	int k=1,j=1,i=0,sum=0;
	while(k<=p && i<v.size()){
		if(sum+v[i]*j<=mid){
			sum+=v[i]*j;
			j++;
			k++;
		}
		else{
			i++;
			j=1;
			sum=0;
		}
	}
	if(i>=v.size()){
		return 0;
	}
	return 1;
}

//by sir
//bool isPossible(vector<int>v,int p,int mid){
//	int pr=0;
//	for(int i=0;i<v.size();++i){
//		int r=v[i],j=1,time=0;
//		while(1){
//			if(time+j*r<=mid){
//				++pr;
//				time+=j*r;
//				++j;
//			}
//			else{
//				break;
//			}
//		}
//		if(pr>=p){
//			return 1;
//		}
//	}
//	
//		return 0;
//}
int prata(vector<int>rank,int p){
	int s=0,e=*max_element(rank.begin(),rank.end()),mid,ans=-1;
	e*=p*(p+1)/2;
//	cout<<e<<endl;
	while(s<=e){
		mid=s+(e-s)/2;
		if(isPossible(rank,p,mid)){
			//cout<<"1"<<endl;
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}
int main(){
	int p=10,l=4;
	vector<int>rank={1,2,3,4};
	cout<<prata(rank,p);
    return 0;
}
