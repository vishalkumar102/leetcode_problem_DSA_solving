class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        if(n==1) return 0;
        int mid = n/2;
        int ans = 0;
        for(int i=0; i<n; i++){
            ans += abs(nums[i]-nums[mid]);
        }
        return ans;

    }
};