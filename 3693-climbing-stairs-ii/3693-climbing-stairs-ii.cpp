class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+5);
        dp[0] = costs[0] + 1;
        if(n>=2) dp[1] = min(dp[0] + costs[1]+1, costs[1]+4);
        if(n >=3) dp[2] = min({costs[2]+9, dp[0] + costs[2]+4, dp[1] + costs[2]+1});
        for(int i=3; i<n; i++){
            dp[i] = min({dp[i-3]+costs[i]+9, dp[i-2]+costs[i]+4, dp[i-1]+costs[i]+1});
        }
        return dp[n-1];
    }
};