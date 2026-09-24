class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            int dig = 0;
            int ele = nums[i];
            while(ele > 0) {
                dig += ele%10;
                ele /= 10;
            }
            if(dig==i) return i;
        }
        return -1;
    }
};