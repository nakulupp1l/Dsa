#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int * solve(){
	int a=5;
	int *ans=&a;
	cout<<&a<<" "<<ans<<" ";
	return ans;
}
int main(){
	cout<<solve();
	
//	int a=5;
//	int *p=&a;
//	int **q=&p;
//	
//	cout<<&a<<endl;
//	cout<<a<<endl;
//	cout<<p<<endl;
//	cout<<&p<<endl;
//	cout<<*p<<endl;
//	cout<<q<<endl;
//	cout<<&q<<endl;
//	cout<<*q<<endl;
//	cout<<**q<<endl;
	
    return 0;
}

//STRANGE MATRIX  : contest question 3
//int BS(int i,int e){
//        int s=0,key=1,m;
//        while(s<=e){
//            m=s+(e-s)/2;
//            if(get(i,m)==1){
//                if(m==0){
//                    return m ;
//                }
//                if(get(i,m-1)==0){
//                    return m;
//                }
//                e=m-1;
//            }
//            else{
//                if(get(i,m)==0){
//                    s=m+1;
//                }
//            }
//        }
//        return -1;
//    }
//    int solve(int R,int C){
//        //code here
//        int ans[2]={0,C};
//        for(int i=0;i<R;++i){
//            int j=C-1;
//            j=BS(i,j);
//            if(j==-1)
//            continue;
//            
//            if(j==0)
//            return i;
//            
//            if(j<ans[1]){
//                ans[0]=i;//row
//                ans[1]=j;//where one found
//            }
//        }
//        return ans[0];
//    }
