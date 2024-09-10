#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
void trans(int x[][3],int t[][3]){
	 for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			t[i][j]=x[j][i];
		}
	}
}
void print(int x[][3]){
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
}
int maxi(int a[][3]){
	int max=INT_MIN;
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			max=(max<a[i][j])?a[i][j]:max;
		}
	}
	return max;
}
int mini(int a[][3]){
	int min=INT_MAX;;
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			min=(min>a[i][j])?a[i][j]:min;
		}
	}
	return min;
}
void rowSum(int x[][3]){
	 int sum;
	for(int i=0;i<3;++i){
		sum=0;
		for(int j=0;j<3;++j){
			sum+=x[i][j];
		}
		cout<<"sum of row "<<i+1<<" is "<<sum<<endl;
	}
}
bool linear(int x[][3],int a){
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			if(a==x[i][j]){
				return 1;
			}
		}
	}
	return 0;
}
void colSum(int x[][3]){
	int sum;
	for(int i=0;i<3;++i){
		sum=0;
		for(int j=0;j<3;++j){
			sum+=x[j][i];
		}
		cout<<"sum of column "<<i+1<<" is "<<sum<<endl;
	}
}
int main(){
	//2 d array
	//declaration
    int arr[3][3];
	//initialisation
	int brr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	//row wise access
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			cout<<brr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	//column wise access
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			cout<<brr[j][i]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	/////////////////////////
//	int x[3][3];
//	for(int i=0;i<3;++i){
//		for(int j=0;j<3;++j){
//			cin>>x[i][j];
//	    }
//	}
//	for(int i=0;i<3;++i){
//		for(int j=0;j<3;++j){
//			cout<<x[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	/////////////////////
	//sum of row
	rowSum(brr);
	//sum of column
	colSum(brr);
	//linear search
//	int a;
//	cout<<"enter element to be searched ";
//	cin>>a;
//	if(linear(brr,a)==1){
//		cout<<"element found"<<endl;
//	}
//	else{
//		cout<<"element not found"<<endl;
//	}
	
	//max and min
	 cout<<"max :"<<maxi(brr)<<endl;
	 cout<<"min :"<<mini(brr)<<endl;
	 
	 //transpose
	 int c[3][3];
	 print(brr);
	 cout<<endl;
	 trans(brr,c);
	 print(c);
	 
	 //vector of vector
	 vector<vector<int> >xyz;
	 vector<int> a{ 1, 2, 3 };
	 vector<int> b{ 2, 1, 3 };
	 vector<int> d{ 3, 1, 2 };
	 xyz.push_back(a);
	 xyz.push_back(b);
	 xyz.push_back(d);
	 cout<<endl;
	 for(int i=0;i<xyz.size();++i){
	 	for(int j=0;j<xyz[i ].size();++j){
	 		cout<<xyz[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	 vector<vector<int>>v(3,vector<int>(5,1));
	 for(int i=0;i<v.size();++i){
	 	for(int j=0;j<v[i ].size();++j){
	 		cout<<v[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 //h.w.
	 vector<vector<int>>u(5,vector<int>(5,-8));
	 for(int i=0;i<u.size();++i){
	 	for(int j=0;j<u[i ].size();++j){
	 		cout<<u[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	 
	return 0;
}
