class Solution {
public:
    vector<vector<int>>dp;
    int f(string s1, string s2, int i, int j){
        if(i>=s1.size() || j>=s2.size()) return 0;
        if(dp[i][j]!= -1) return dp[i][j];
        if(s1[i] == s2[j]) return dp[i][j] = 1 + f(s1, s2, i+1, j+1);
        else return  dp[i][j] = max(f(s1, s2, i+1, j), f(s1, s2, i, j+1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        dp.clear();
        int m = text1.size();
        int n = text2.size();
        // dp.resize(m, vector<int>(n, -1));
        // return f(text1, text2, 0, 0);
        dp.resize(m+1, vector<int>(n+1, 0));

        for(int i=m-1; i>=0; i--){
            for(int j=n-1; j>=0; j--){
                if(text1[i]==text2[j]) dp[i][j] = 1 + dp[i+1][j+1];
                else dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
        return dp[0][0];
    }
};