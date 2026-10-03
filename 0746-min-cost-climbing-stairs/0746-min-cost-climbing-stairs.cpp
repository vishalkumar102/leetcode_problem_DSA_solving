class Solution {
public:
    int mincost(vector<int>&cost, int idx, vector<int>&dp){
        if(idx==cost.size()-1 || idx==cost.size()-2) return cost[idx];
        if(dp[idx]!=-1) return dp[idx];
        return dp[idx] = cost[idx] + min(mincost(cost, idx+1, dp), mincost(cost, idx+2, dp));
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n, -1);
        return min(mincost(cost, 0, dp), mincost(cost, 1, dp));
    }
};