#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int  n = nums.size();
        long long odd = nums[0],even = 0;
        for(int i = 1;i<n;++i){
            long long o = max(odd,even+nums[i]);
            long long e = max(even,odd-nums[i]);
            even=e;
            odd = o;
        }
        return max(odd,even);
    }
};
int main(){

	Solution s;
	vector<int> v{6,2,1,2,4,5};
	cout<<s.maxAlternatingSum(v)<<endl;
}
