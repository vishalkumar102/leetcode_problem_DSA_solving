#define ll long long int
#define mod 1000000007
vector<vector<int>>dp;
class Solution {
public:
    int total_number_of_way(int n, int k, int tar){
        if(n==0 && tar==0) return 1;
        if(n==0) return 0;
        if(dp[n][tar]!=-1) return dp[n][tar];
        int sum = 0;
        for(int i=1; i<=k; i++){
            if(tar - i < 0) continue;
            sum = ((sum%mod) + total_number_of_way(n-1, k, tar-i)%mod)%mod;
        }
        return dp[n][tar] = sum;
    }
    int numRollsToTarget(int n, int k, int target) {
        dp.clear();
        dp.resize(n+5, vector<int>(target+5, -1));
        return total_number_of_way(n, k, target);
    }
};