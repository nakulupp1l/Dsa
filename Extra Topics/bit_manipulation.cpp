
// C++ program to illustrate the use of std::upper_bound
#include <bits/stdc++.h>
using namespace std;
int update(int n,int i,int target){
	//clear that bit
	int mask=~(1<<i);
	n=mask&n;
	if(target){
		n=n|(1<<i);
	}
	return n;
}
int clearbitinrange(int n,int i,int j){
	int a=(-1<<(i+1));
	int b=((1<<j)-1);
	a=a|b;
	return a&n;
}
int main() {
//    vector<int> v = {10, 20, 30, 40, 50};
//
//    // Finding upper bound for value 30 in vector v
////    cout << *upper_bound(v.begin(), v.end(),40);
//int a=0;
//cout<<~a;

    int n=10,i=2,target=1;
    cout<<update(n,i,target)<<endl;
    cout<<update(n,i,!target)<<endl;
    cout<<clearbitinrange(14,2,1)<<endl;
    return 0;
}

