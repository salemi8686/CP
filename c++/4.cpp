#include<iostream>
using namespace std;
int main(){
	double a1[5][5];
	double a2[5][5];
	double sum1=0,sum2=0;
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			int x=i+1,y=j+1;
			a1[i][j]=(x*x)/float(y*y + 1);
			a2[i][j]=(x*x)/float(x*x + y*y);
            sum1+=a1[i][j];
            sum2+=a2[i][j];
		}
	}
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			cout<<a2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"A1 - Arifmetikalyk ortasy: "<<sum1/25<<endl;
	cout<<"A2 - Arifmetikalyk ortasy: "<<sum2/25<<endl;
}
