#include<iostream>
using namespace std;
int main(){
	string s;
	cin>>s;
	bool isA = false;
	for(int i=0;i<s.size();++i){
		if(isA==true){
			cout<<s[i]<<" ";
		}
		if(s[i]=='a') isA=true;
	}
}
