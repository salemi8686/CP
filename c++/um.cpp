#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> um;
	um[1] = 2;
	um[1] = 3;
	for(auto x : um) cout<<x.first<<" "<<x.second<<endl;
}
