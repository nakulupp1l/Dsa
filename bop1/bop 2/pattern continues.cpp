#include<iostream>
#include "assert.h"
using namespace std;
int main(){
	int i,j,k,n,l;
	char x;
	cout<<"enter n :";
	cin>>n;
	//it is a full pyramid containing 1,2,3,... stars
//	for(i=0;i<n;++i){
//		for(j=0;j<n-1-i;++j){
//			cout<<" ";
//		}
//		for(j=0;j<=i;++j){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}



    //inverted version of above PATTERN
//    for(i=0;i<n;++i){
//    	for(j=0;j<i;++j){
//    		cout<<" ";
//		}
//		for(j=0;j<n-i;++j)
//		{
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
    
    
    
    //DIAMOND
//    n/=2;
//    for(i=0;i<n;++i){
//    	for(j=0;j<n-1-i;++j){
//    		cout<<" ";
//		}
//		for(j=0;j<=i;++j){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}    
//	for(i=0;i<n;++i){
//		for(j=0;j<i;++j){
//			cout<<" ";
//		}
//		for(j=0;j<n-i;++j){
//			cout<<"* ";
//		}
//		cout<<endl;
//	}
    
    
    
    //HOLLOW DIAMOND
//        n/=2;
//    for(i=0;i<n;++i){
//    	for(j=0;j<n-1-i;++j){
//    		cout<<" ";
//		}
//		for(j=0;j<=i;++j){
//			if(j==0||j==i)
//			cout<<"* ";
//			else
//			cout<<"  ";
//		}
//		cout<<endl;
//	}    
//	for(i=0;i<n;++i){
//		for(j=0;j<i;++j){
//			cout<<" ";
//		}
//		for(j=0;j<n-i;++j){
//			if(j==0||j==n-i-1)
//			cout<<"* ";
//			else
//			cout<<"  ";
//		}
//		cout<<endl;
//	}
	
	
	//FLIPPED SOLID DIAMOND
//	n/=2;
//	for(i=0;i<n;++i){
//		for(j=0;j<n-i;++j){
//			cout<<"*";
//		}
//		for(j=0;j<2*i+1;++j){
//			cout<<" ";
//		}
//		for(j=0;j<n-i;++j){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	for(i=0;i<n;++i){
//		for(j=0;j<=i;++j){
//			cout<<"*";
//		}
//		for(j=0;j<2*(n-i)-1;++j){
//			cout<<" ";
//		}
//		for(j=0;j<=i;++j){
//			cout<<"*";
//		}
//		cout<<endl;
//	}



    //FANCY PATTERN
    /*
	1
	2*2
	3*3*3
	4*4*4*4
	4*4*4*4
	3*3*3
	2*2
	1
	*/
//	for(i=0;i<n;++i){
//		for(j=0;j<=i;++j){
//			cout<<i+1;
//			if(j!=i){
//				cout<<"*";
//			}
//		}
//		cout<<endl;
//	}
//	for(i=0;i<n;++i){
//		for(j=0;j<n-i;++j){
//			cout<<n-i;
//			if(j!=n-i-1){
//				cout<<"*";
//			}
//		}
//		cout<<endl;
//	}



    //alphabet pallindrome pyramid
    /*
	A
	A B A
	A B C B A
	A B C D C B A
	A B C D E D C B A
	*/
	
//	for(i=0;i<n;++i){
//		for(j=0;j<=i;++j){
//			k=j+1;
//			x='A'+k-1;
//			cout<<x<<" ";
//		}
//		--j;
//		for(;j>0;--j){
//			k=j;
//			x='A'+j-1;
//			cout<<x<<" ";
//		}
//		cout<<endl;
//	}



//NUMERIC HOLLOW HALF PYRAMID
/*
1
1 2
1   3 
1     4
1 2 3 4 5

*/
//for(i=0;i<n;++i){
//	for(j=0;j<=i;++j){
//		if(j==0||j==i||i==n-1)
//		cout<<j+1<<" ";
//		else
//		cout<<"  ";
//	}
//	cout<<endl;
//}



//INVERTED OF ABOVE PATTERN
//for(i=0;i<n;++i){
//	k=i;
//	for(j=0;j<n-i;++j){
//		if(j==0||j==n-i-1||i==0)
//		cout<<k+1<<" ";
//		else
//		cout<<"  ";
//		++k;
//	}
//	cout<<endl;
//}


//NUMERIC PALLINDROME EQUILATERAL PYRAMID
/*
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
*/
//for(i=0;i<n;++i){
//	for(j=0;j<n-i;++j){
//		cout<<"  ";
//	}
//	for(j=0;j<=i;++j){
//		cout<<j+1<<" ";
//	}
//	k=i;
//	for(j=0;j<i;++j){
//		cout<<k<<" ";
//		--k;
//	}
//	cout<<endl;
//}



//FANCY PATTERN #1
/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****

*/
//assert(n<=9);
//for(i=0;i<n;++i){
//	int u,v;
//	u=8-i;
//	v=i+1;
//	for(j=0;j<17;++j){
//		if(j==u&&v>0){
//			cout<<i+1;
//			u+=2;
//			--v;
//		}
//		else{
//			cout<<"*";
//		}
//	}
//	cout<<endl;
//}



//FANCY PATTERN #2
//int count =1;
//for(i=0;i<n;++i){
//	for(j=0;j<=i;++j){
//		cout<<count++;
//		if(j!=i)
//		cout<<"*";
//	}
//	cout<<endl;
//}
//int start=count-n;
//for(i=0;i<n;i++){
//	k=start;
//	for(j=0;j<n-i;++j){
//		cout<<k++;
//		if(j!=n-i-1)
//		cout<<"*";
//	}
//	start=start-(n-i-1);
//	cout<<endl;
//}
//int c=11,s;
//s=c-n;
//for(i=0;i<4;++i){
//	k=s;
//	for(j=0;j<n-i;++j){
//		cout<<k++;
//	}
//	s=s-(n-i-1);
//	cout<<endl;
//}



//FANCY PATTERN #3
//int c;
//for(i=0;i<n;++i){
//	if(i<=n/2){
//		c=2*i+1;
//	}
//	else{
//		c=2*(n-i-1)+1;
//	}
//	for(j=0;j<c;++j){
//		if(j<=c/2)
//		{
//			if(j==0)
//			{
//				cout<<"*";
//			}
//		cout<<j+1;
//		k=j+1;
//		}
//		else
//		cout<<--k;
//		if(j==c-1){
//			cout<<"*";
//		}
//	}
//	cout<<endl;
//}




//FLOYD'S TRIANGLE
//int c=1;
//for(i=0;i<n;++i){
//	for(j=0;j<=i;++j){
//		cout<<c++<<" ";
//	}
//	cout<<endl;
//}



//PASCAL'S TRIANGLE
//int c=1;
//for(i=1;i<=n;++i){
//	c=1;
//	for(j=1;j<=i;j++){
//		cout<<c<<" ";
//		c=c*(i-j)/j;
//	}
//	cout<<endl;
//}



//butterfly pattern
//int s=0,c;
//for(i=0;i<2*n;++i){
//	c=(i<n)?i:2*n-i-1;
//	s=(i<n)?2*(n-i-1):2*(i-n);
//	for(j=0;j<2*n;++j){
//		if(j<=c){
//			cout<<"*";
//		}
//		else if(s-->0){
//			cout<<" ";
//		}
//		else{
//			cout<<"*";
//		}
//	}
//	cout<<endl;
//}



//c=1;
//for(i=1;i<=n;++i){
//	c=i;
//	for(j=1;j<=n;++j){
//		if(j>n-i)
//		cout<<c++<<" ";
//		else
//		cout<<"  ";
//	}
//	if(i!=1){
//		--c;
//		for(j=1;j<i;++j){
//			cout<<--c<<" ";
//		}
//	}
//	cout<<endl;
//}



// c=1;
//for(i=0;i<n;++i){
//	for(j=0;j<n-i;++j){
//		cout<<" ";
//	}
//	c=1;
//	for(j=0;j<2*i+1;++j){
//		if((i==n-1&&j%2==0)||j==0)
//		cout<<c++;
//		else if(j==0||j==2*i)
//		cout<<i+1;
//		else
//		cout<<" ";
//	}
//	cout<<endl;
//}




//
//bool a=true,b=false;
//b=(~b);
//a=~a;
////a=~a;
////a=~a;
//cout<<b<<" "<<a;

	return 0;
}
