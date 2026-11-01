class Solution {
public:
    int minMoves(vector<int>& nums) {
        int ans = 0;
        int minele = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(minele > nums[i]) minele = nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            ans += nums[i]-minele;
        }
        return ans;
    }
};