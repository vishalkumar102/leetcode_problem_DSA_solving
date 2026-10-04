class Solution {
public:
    int maxDistinct(string s) {
        int dp[26];
        memset(dp, 0,sizeof(dp));
        for(int i=0; i<s.size(); i++){
            dp[s[i]-'a'] = 1;
        }
        int count = 0;
        for(int i=0; i< 26; i++){
            if(dp[i]==1) count++;
        }
        return count;
    }
};