class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<bool>dp(n, false);
        dp[0] = true;
        for(int i=0; i<n-1; i++){
            if(dp[i]==true){
                for(int j=i+1; j<=nums[i]+i && j<=n-1; j++){
                    dp[j] = true;
                }
                if(dp[n-1]==true) return true;
            }
        }
        return dp[n-1];
    }
};