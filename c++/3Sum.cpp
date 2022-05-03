#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> mi;
        for(int i=0;i<nums.size();++i) mi[nums[i]] = i;
        for(int i=0;i<nums.size();++i){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1;j<nums.size();++j){
                if(j!=i+1 && nums[j]==nums[j-1]) continue;
               int sum2 = nums[i]+nums[j];
               if(mi[0-sum2]>j) v.push_back({nums[i],nums[j],0-sum2});
            }
        }
        return v;
    }
};

int main(){
	Solution s;
	vector<int> input{-1,0,1,2,-1,-4};
	vector<vector<int>> v(s.threeSum(input));
	for(vector<int> ans : v){
		cout<<'[';
		for(auto num: ans) cout<<num<<" ";
		cout<<']'<<endl;
	}
}
