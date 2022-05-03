#include<iostream>
using namespace std;
int main(){
	int sum = 1;
	int a[6][8]={{-4,2,5,8,7,9,1,3},
	             {6,1,4,5,7,8,5,6},
				 {4,2,3,4,7,8,6,5},
				 {-5,7,8,9,1,2,3,4},
				 {8,6,3,5,4,1,2,3},
				 {7,-2,3,4,5,6,7,9}};
			
	for(int i=0;i<6;++i){
		if(a[i][0]>0) sum*=a[i][0];
	}
	cout<<sum<<endl;
}
