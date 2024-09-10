#include <iostream>
#include <vector>
using namespace std;

int findRepeatingElement(vector<int>&arr){

vector<int>countArray(5);

for(int i=0;i<arr.size();i++){
	countArray[arr[i]]++;
}

for(int i=0;i<arr.size();i++){
	if (countArray[arr[i]] >= 2){
		int ans = arr[i];
		return ans;
	}
}
    return -1;
}
int main(){
vector<int>arr{1,2,3,4,1,6};
int ans = findRepeatingElement(arr);
cout<< ans;
return 0;
}
