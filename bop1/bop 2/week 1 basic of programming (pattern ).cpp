#include<iostream>
using namespace std;
int main(){
	//conditionals
//	float marks;
//	int i;
//	for(i=0;i<5;++i){
//		cout<<"enter marks: ";
//	cin>>marks;
//	if(marks>=90){
//		cout<<"A grade"<<endl;
//	}
//	else {
//    	if(marks>=80){
//		cout<<"B grade"<<endl;
//	    }
//	    else {
//	    	if(marks>=60){
//	    		cout<<"C grade"<<endl;
//			}
//			else if(marks>=40){
//				cout<<"D grade"<<endl;
//			}
//			else{
//				cout<<"fail"<<endl;
//			}
//		}
//	}
//	}

//    unsigned int bro_num;
//    cout<<"enter no. of brothers: ";
//    cin>>bro_num;
//    if(bro_num==0){
//    	cout<<"baat ban jayegi"<<endl;
//    }
//    else{
//    	cout<<"baat nhi banegi"<<endl;
//	}

//LOOPs
//int i;
//    for(i=0;i<5;++i){
//    	cout<<"hello  "<<i<<endl;
//	}

//H.W.
//int n;
//if(cin>>n){
//	cout<<"nakul"<<endl;
//}
//if(cout<<"alas kam karle bsdk")
//{
//	cout<<" uppal"<<endl;
//}

//PATTERNS
int i,j,n,k;
/*
solid rectangle

* * * * *
* * * * *
* * * * *

*/
//for(i=0;i<3;++i){
//	for(j=0;j<5;++j){
//		cout<<"* ";
//	}
//	cout<<endl;
//}

/*
Square pattern
* * *
* * *
* * *
*/
//cout<<"enter value of n: ";
//cin>>n;
// for(i=0;i<n;++i)
// {
// 	for(j=0;j<n;++j){
// 		cout<<"* ";
//	 }
//	 cout<<endl;
// }

/*
 hollow rectangle
 * * * * *
 *       *
 * * * * *
 */
 
//for(i=0;i<3;++i){
//	if(i==0||i==3-1){
//		for(j=0;j<5;++j)
//		cout<<"* ";
//	}
//	else{
//		cout<<"* ";
//		for(j=1;j<=5-2;++j)
//		cout<<"  ";
//		cout<<"* ";
//	}
//	cout<<endl;	
//	}

 /*
 half pyramid
 *
 **
 ***
 ****
 *****
 */
// for(i=0;i<5;++i){
// 	for(j=0;j<=i;++j){
// 		cout<<"*";
//	 }
//	 cout<<endl;
// }
 
 /*
 inverted half pyramid
 *****
 ****
 ***
 **
 *
 
 */
// for(i=0;i<5;i++){
// 	for(j=0;j<5-i;j++){
// 		cout<<"*";
//	 }
//	 cout<<endl;
// }
 
 /*
 numeric half pyramid
 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5
 */
// for(i=0;i<5;++i){
// 	for(j=0;j<=i;++j){
// 		cout<<j+1<<" ";
//	 }
//	 cout<<endl;
// }
 
 /*
 inverted numeric half pyramid
 1 2 3 4 5
 1 2 3 4 
 1 2 3 
 1 2
 1
 */
// for(i=0;i<5;++i){
// 	for(j=0;j<5-i;j++){
// 		cout<<j+1<<" ";
//	 }
//	 cout<<endl;
// }
 
 /*
 full pyramid
           *
          * *
         * * *
		* * * * 
	   * * * * * 	
				           
 */
// for(i=0;i<5;++i){
// 	for(j=0;j<5-i;++j){
// 		cout<<" ";
//	 }
//	 for(k=0;k<=i;++k){
//	 	cout<<"* ";
//	 }
//	 cout<<endl;
// }
 
 /*
 inverted full pyramid
 * * * * *
  * * * *
   * * *
    * *
     *
     
 */
// for(i=0;i<5;++i){
// 	for(j=0;j<i;++j){
// 		cout<<" ";
//	 }
//	 for(k=0;k<5-i;++k){
//	 	cout<<"* ";
//	 }
//	 cout<<endl;
// }
 int a=(1,2,3);
 cout<<a<<endl;
 /*
 hollow inverted half pyramid
 * * * * * *
 *       *
 *     *
 *   *
 * *
 *
 
 
 */
// for(i=0;i<6;++i){
//    if(i==0){
//    	for(j=0;j<=6-i-1;++j){
//    		cout<<"* ";
//		}
//	}
//	else{
//		for(j=0;j<=6-i-1;++j){
//		if(j==0||j==6-i-1){
//			cout<<"* ";
//		}
//		else{
//			cout<<"  ";
//		}
//	}
//	}	
//	cout<<endl;
// 	}
 
 /*
 full hollow pyramid
 
           *
          ***
         *****
		******* 
	   ********* 
 */
// for(i=0;i<5;++i){
// 	for(j=0;j<5-i;++j){
// 		cout<<" ";
//	 }
//	 for(k=0;k<2*(i)+1;++k){
//	 	cout<<"*";
//	 }
//	 cout<<endl;
// }

//for(i=0;i<5;++i){
//	k=0;
//	for(j=0;j<=2*(5-1);++j){
//	    if(k<5-i-1){
//	    	cout<<" ";
//	    	++k;
//		}
//		else if(j>=5-i-1&&j<=5-i-1+2*i){
//			cout<<"*";
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}

//for(i=0;i<5;++i){
//	k=0;
//	for(j=0;j<2*5+1;++j){
//		if(j<5-i-1){
//			cout<<" ";
//		}
//		else if(k<2*i+1){
//			cout<<"*";
//			++k;
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}

//for(i=0;i<5;++i){
//	k=0;
//	for(j=0;j<2*5+1;++j){
//		if(j<5-i-1){
//			cout<<" ";
//		}
//		else if(k<2*i+1){
//			if(i<5-1){
//			
//			if(k==0||k==2*i)
//			cout<<"*";
//			else
//			cout<<" ";
//		}
//		else{
//			cout<<"*";
//		}
//			++k;
//		}
//		else{
//			cout<<" ";
//		}
//	}
//	cout<<endl;
//}
/* 
    1
   232
  34543
 4567654
567898765
*/
for(i=0;i<5;++i){
	k=0;
	int l=0;
	for(j=0;j<=(5-1)+i;++j)
	{
		if(j<(5-1)-i){
			cout<<" ";
		}
		else if(k<2*(i)+1){
			if(j<=5-1){
				cout<<k+i+1;
			}
			else{
				cout<<2*i-l;
				++l;
			}
			++k;
		}	
	}
	cout<<endl;
}
}
