#include<iostream>
using namespace std;
int main(){
	int a[10]={1,52,148,321,99,4545,32,999,2000,15};
	for(int i=0;i<10;++i){
		if(a[i]>100) a[i]=777;
	}
	
	for(int i=0;i<10;++i){
		cout<<a[i]<<" ";
	}
	
}
