#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int converter(char ch){
	int a=ch;
	a-=65;
	return a;
}
int main(){
	vector<int>ans(26);
	string str="ABCABC";
	int index,i=0,a=0;
	for(i=0;i<26;++i){
		ans[i]=i+1;
	}
	i=0;
	while(str[i]!='\0'){
		index=converter(str[i]);
		--ans[index];
		cout<<i<<" "<<ans[i]<<endl;
		i++;
	}
	for(i=0;i<26;++i){
		if(ans[i]<=0){
			++a;
		}
	}
	cout<<a;
    return 0;
}
