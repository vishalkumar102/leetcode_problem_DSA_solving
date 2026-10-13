class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        long long result = 0;
        for(int i=0; i<n; i++){
            if(nums[i] < 0) nums[i] *= -1;
        }
        sort(nums.begin(), nums.end());
        for(int i=0; i<n/2; i++){
            long long sum = pow(nums[n-1-i], 2) - pow(nums[i], 2);
            result+= sum;
        }
        if(n%2!=0) result += pow(nums[n/2],2);
        return result;
    }
};