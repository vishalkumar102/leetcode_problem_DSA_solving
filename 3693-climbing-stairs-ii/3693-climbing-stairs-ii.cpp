class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        costs[0] = costs[0] + 1;
        if(n>=2) costs[1] = min(costs[0] + costs[1]+1, costs[1]+4);
        if(n >=3) costs[2] = min({costs[2]+9, costs[0] + costs[2]+4, costs[1] + costs[2]+1});
        for(int i=3; i<n; i++){
            costs[i] = min({costs[i-3]+costs[i]+9, costs[i-2]+costs[i]+4, costs[i-1]+costs[i]+1});
        }
        return costs[n-1];
    }
};