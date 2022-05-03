#include<bits/stdc++.h>
using namespace std;
class Solution{
	public:
		int findLongestSubarrayBySum(vector<int>& v,int sum){
			int s=0,e=1;
			int mx = -1;
			int add = v[0];
			while(e<=v.size()){
				if(add<sum){
					add+=v[e];
					e++;
				}
				else if(add>sum){
					add-=v[s];
					s++;
				}
				else{
					mx = max(mx,e-s);
					add+=v[e];
					e++;
				}
			}
			return mx;
		}
};
int main(){
	vector<int> v{1,2,3,7,5};
	int sum = 12;
	Solution s;
	cout<<s.findLongestSubarrayBySum(v,sum);
	
}
