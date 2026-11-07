class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<vector<int>>dp;
        // vector<int>v;
        // v.push_back(triangle[0][0]);
        // dp.push_back(v);
        int ans = INT_MAX;
        dp.push_back({triangle[0][0]});
        for(int i=1; i<m; i++){
            vector<int>v;
            for(int j=0; j<i+1; j++){
                if(j==0){
                    int ele = dp[i-1][j] + triangle[i][j];
                    v.push_back(ele);
                }
                else if(j==triangle[i].size()-1){
                    int ele = dp[i-1][j-1] + triangle[i][j];
                    v.push_back(ele);
                }
                else{
                    int ele = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
                    v.push_back(ele);
                }   
            }
            dp.push_back(v);
        }

        for(int j=0; j<triangle[m-1].size(); j++){
            ans = min(ans, dp[m-1][j]);
        }
        return ans;

    }
};