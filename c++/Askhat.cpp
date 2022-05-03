#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cin>>a[i][j];
			if(i==j || i+j==n-1) a[i][j]=0;
		}
	}
	cout<<endl;
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
