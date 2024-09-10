#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void print(int a[],int n){
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
}

class Sum{
	public:
	   string sum(int *a,int m,int *b,int n){
	   	int carry=0;
	   	string ans;
	   	int i=m-1,j=n-1;
	   	while(i>=0&&j>=0){
	   		int x=a[i]+b[j]+carry;
	   		int digit=x%10;
	   		ans.push_back(digit+'0');
	   		carry=x/10;
	   		//cout<<ans<<endl;
	   		i--,j--;
		   }
		   while(i-->=0){
	   		int x=a[i]+0+carry;
	   		int digit=x%10;
	   		ans.push_back(digit+'0');
	   		carry=x/10;
		   }
		   while(j-->=0){
	   		int x=0+b[j]+carry;
	   		int digit=x%10;
	   		ans.push_back(digit+'0');
	   		carry=x/10;
		   }
		   if(carry){
		   	ans.push_back(carry);
		   }
		   while(ans[ans.size()-1]=='0'){
		   	ans.pop_back();
		   }
		   reverse(ans.begin(),ans.end());
		   return ans;
	   } 
	   void fact(int n){
	   	vector<int>a;
	   	a.push_back(1);
	   	int carry=0;
	   	for(int i=2;i<=n;++i){
	   		for(int j=0;j<a.size();++j){
	   			int x=a[j]*i+carry;
	   			carry=x/10;
	   			a[j]=x%10;
			   }
			while(carry){
			   	a.push_back(carry%10);
			   	 carry/=10;
			   }
		   }
		   reverse(a.begin(),a.end());
		   for(int i:a){
		   	cout<<i;
		   }
	   }
};
int main(){
	//sort colors
	/*
	Given an array nums with n objects colored red, white, or blue
	, sort them in-place so that objects of the same color are adjacent,
	 with the colors in the order red, white, and blue.
     We will use the integers 0, 1, and 2 to represent the color red, 
     white, and blue, respectively.
     You must solve this problem without using the library's sort function.
	*/
//	int a[]={1,1,2,2,0,0},n=6;
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n-i-1;++j){
//			if(a[j]>a[j+1]){
//				swap(a[j],a[j+1]);
//			}
//		}
//	}
//	print(a,n);
    //3 pointer approach by sir
//    int l=0,m=0,e=n-1;
//    while(m<=e){
//    	if(a[m]==0){
//    		swap(a[l],a[m]);
//    		m++;
//			l++; 
//		}
//		else if(a[m]==1){
//			m++;
//		}
//		else{
//			swap(a[m],a[e]);
//			--e;
//		}
//	}
//	print(a,n);

    //move all -ve to left side of an array
//    int a[]={1,2,-3,4,-5,6},n=6;
//    int s=0,e=n-1;
//    while(s<e){
//    	if(a[s]>0){
//    		swap(a[s],a[e]);
//    		e--;
//		}
//		else if(a[s]<0){
//			s++;
//		}
//		else if(a[e]>0){
//			e--;
//		}
//	}
//	print(a,n);


// find duplicate number 
//    int a[]={1,3,4,2,2},n=5;
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n-i-1;++j){
//			if(a[j]>a[j+1]){
//				swap(a[j],a[j+1]);
//			}
//		}
//	}
//	for(int i=0;i<n-1;++i){
//		if(a[i]==a[i+1]){
//			cout<<"duplicate element is "<<a[i]<<endl;
//			break;
//		}
//	}

//negetive marking method
//    vector<int>a{1,3,4,2,2}; 
//    int neg=-1;
//    for(int i=0;i<a.size();++i){
//    	int index=abs(a[i]);
//    	if(a[index]<0){
//    		cout<<"duplicate value is "<<index;
//		}
//		a[index]*=neg;
//	}
	 
//	 vector<int>v{1,3,4,2,2};
//	 while(v[0]!=v[v[0]]){
//	 	swap(v[0],v[v[0]]);
//	 }
//	 cout<<v[0]<<endl;



//missing element
//int a[]={1,2,2,2,5},index;
//  for(int i=0;i<sizeof(a)/sizeof(int);++i){
//   index=abs(a[i]);
//  	if(a[index-1]>0){
//  		a[index-1]*=-1;
//	  }
//  }
//  for(int i=0;i<5;++i){
//  	if(a[i]>=0){
//  		cout<<i+1<<" ";
//	  }
//  }
  
//sorting method
//   int i=0,n=5;
//   while(i<n){
//   	index=a[i]-1;
//   	if(a[i]!=a[index]){
//   		swap(a[i],a[index]);
//	   }
//	   else{
//	   	i++;
//	   }
//   }
//   for(i=0;i<n;++i){
//   	if(a[i]!=(i+1)){
//   		cout<<i+1<<" ";
//	   }
//   }
//int i=0,n=5;
//     while(i<n){
//     	index=a[i]-1;
//     	if(a[i]!=a[index]){
//     		swap(a[i],a[index]);
//		 }
//		 else
//		 i++;
//	 }



//find first repeating element
//    int a[]={1,7,3,4,3,7,6},n=7,x=INT_MAX;
//    int b[6]={0,0,0,0,0,0};
//    for(int i=0;i<n;++i){
//       b[a[i]]++;
//	}
//	for(int i=0;i<n;++i){
//		x=a[i];
//		if(b[x]>1){
//			cout<<a[i];
//			break;
//		}
//	}
//using hash
//unordered_map<int,int>hash;
//it will act as b[a[i]]++;

//remove duplicate of an array
//int a[]={1,2,2,3,3,4,4,5},n=8;
//int j=0,temp[n];
//  for(int i=0;i<n-1;++i){
//  	if(a[i]!=a[i+1]){
//  		temp[j++]=a[i];
//	  }
//  }
//  for(int i=0;i<j;++i){
//  	a[i]=temp[i];
//  	cout<<a[i]<<" ";
//  }

//common elemnet from 3 sorted array
//int i=0,j=0,k=0,n1,n2,n3;
//int a[]={1,2,10,20,40,80};
//int b[]={6,7,20,80,100};
//int c[]={3,4,15,20,30,70,80,120};
//n1=sizeof(a)/sizeof(int);
//n2=sizeof(b)/sizeof(int);
//n3=sizeof(c)/sizeof(int);
//while(i<n1&&j<n2&&k<n3){
//	if(a[i]==b[j]&&b[j]==c[k]){
//		cout<<a[i]<<" ";
//		i++,j++,k++;
//	}
//	else if(a[i]<b[j]){
//		i++;
//	}
//	else if(b[j]<c[k]){
//		j++;
//	}
//	else{
//		k++;
//	}
//}

//wave form of a matrix
//int a[3][4]{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//for(int i=0;i<4;++i){
//	for(int j=0;j<3;++j){
//		if(i%2==0)
//		cout<<a[j][i]<<" ";
//		else{
//			cout<<a[2-j][i]<<" ";
//		}
//	}
//}

//spiral form of a matrix;
//by me
//vector<vector<int>>v{
//{1,2,3,4,5},
//{6,7,8,9,10},
//{11,12,13,14,15},
//{16,17,18,19,20},
//{21,22,23,24,25},
//{26,27,28,29,30}};
//
//int er=v.size()-1,ec=v[0].size()-1,sc=0,sr=0,count =(er+1)*(er+1);
//while(count>0){
//	//staring row
//	for(int i=sc;i<=ec;++i){
//		cout<<v[sr][i]<<" ";
//		count--;
//	}
//	++sr;
//	//ending column
//	for(int i=sr;i<=er;++i){
//		cout<<v[i][ec]<<" ";
//		count--;
//	}
//	--ec;
//	//ending row
//	for(int i=ec;i>=sc;--i){
//		cout<<v[er][i]<<" ";
//		count--;
//	}
//	--er;
//	//starting column
//	for(int i=er;i>sc;--i){
//		cout<<v[i][sc]<<" ";
//		count--;
//	}
//	++sc;
//}

//by sir same type of code

//factorial of a large number
Sum s;
int x[]={1,2,3},y[]={0,1,2,3};
string a=s.sum(x,sizeof(x)/sizeof(int),y,sizeof(y)/sizeof(int));
cout<<a<<endl;
s.fact(999);
}