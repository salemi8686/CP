class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int res = 1, n = nums.size();
        vector<int> dp(n,1);
        for(int i=0;i<nums.size();++i){
            for(int j=0;j<i;++j){
                if(nums[i]>nums[j]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            res = max(res,dp[i]);
        }
        return res;
    }
};