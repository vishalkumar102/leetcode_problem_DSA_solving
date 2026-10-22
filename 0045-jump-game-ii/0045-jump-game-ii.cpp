class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        vector<int>dp(nums.size(), INT_MAX);
        int n = nums.size();
        dp[0] = 0;
        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<=nums[i] && i+j<nums.size(); j++){
                dp[i+j] = min(dp[i]+1, dp[i+j]);
                if(i+j==n-1) return dp[i+j];
            }
        }
        return dp[dp.size()-1];
    }
};