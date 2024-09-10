#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int i=0,j=0;
    vector<int>ans;
    while(i<a.size()&&j<b.size()){
        if(a[i]==b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else{
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }
            else{
                ans.push_back(b[j]);
                j++;
            }
        }
    }
    while(i<a.size()){
        ans.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        ans.push_back(b[j]);
        j++;
    }
    return ans;
}
int removeDuplicates(vector<int> &a, int n) {
	// Write your code here.
	int i=0;
	while(i<n){
		if(a[i]==a[i+1]){
			int j=i;
			while(j<n-1){
				a[j]=a[j+1];
                j++;
			}
		}
		else{
			i++;
		}
	}
	return a.size();
}
int main(){
	vector<int>a={1,2,4,5,6};
	vector<int>b={2,3,4,5,6,9,10};
//	vector<int>ans=sortedArray(a,b);
	vector<int>c={1,1,1,2,2,3,4};
	cout<<removeDuplicates(c,c.size());
//	for(auto i:ans){
//		cout<<i<<" ";
//	}
    return 0;
}
