class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int inc = 1, dec = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] > nums[i-1]){
                dec = 1;
                inc++;
                if(ans < inc) ans = inc;
            }
            else if(nums[i] < nums[i-1]){
                inc = 1;
                dec++;
                if(ans < dec) ans = dec;
            }
            else {
                inc = 1;
                dec = 1;
            }
        }
        return ans;
    }
};