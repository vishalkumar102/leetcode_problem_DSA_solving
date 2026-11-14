class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int result = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            int ans = nums[i];
            if(ans > 0 && ans < result && (l==1 || r==1))  result = ans;
            for(int j=i+1; j<nums.size(); j++){
                ans += nums[j];
                if(ans > 0 && ans < result && j-i+1>=l && j-i+1<=r) result = ans;
            }
        }
        if(result == INT_MAX) return -1;
        return result;
    }
};