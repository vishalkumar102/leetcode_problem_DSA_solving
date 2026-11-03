class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxele = 0;
        for(int i=0; i<nums.size(); i++){
            if(maxele < nums[i]) maxele = nums[i];
        }
        int ans = 0;
        for(int i=0; i<nums.size(); i++){
            ans += (maxele - nums[i]);
        }
        return ans;
    }
};