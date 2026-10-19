class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int leftans = -1;
        int lo = 0, hi = n-1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                if((mid >0 && nums[mid-1]!=target) || mid==0){
                    leftans = mid;
                    break;
                }
                else hi = mid-1;
            }
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
        lo = 0, hi = n-1;
        int rightans = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]==target){
                if((mid < n-1 && nums[mid+1]!=target) || mid==n-1){
                    rightans = mid;
                    break;
                }
                else lo = mid+1;
            }
            else if(nums[mid] > target) hi = mid-1;
            else lo = mid+1;
        }
        vector<int>ans;
        if(leftans!=-1){
            for(int i=leftans; i<=rightans; i++){
                ans.push_back(i);
            }
        }
        return ans;

    }
};