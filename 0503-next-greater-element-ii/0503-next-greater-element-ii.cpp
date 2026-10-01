class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n = nums.size();
        for(int i=n-1; i>=0; i--){
            while(st.size() > 0 && nums[i] > st.top()) st.pop();
            st.push(nums[i]);
        }
        vector<int>ans(n);
        for(int i=n-1; i>=0; i--){
            while(st.size() > 0 && nums[i] >= st.top()) st.pop();
            if(st.size()!=0)ans[i] = st.top();
            else ans[i] = -1;
            st.push(nums[i]);
        }
        return ans;

    }
};