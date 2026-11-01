class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1) return 0;
        int n = nums.size();
        int ans = nums[n-1] - nums[0];
        for(int i=n-2; i>0; i--){
            nums[i] = nums[i] + ans;
            ans += nums[i] - nums[i+1];
        }
        return ans;
    }
};