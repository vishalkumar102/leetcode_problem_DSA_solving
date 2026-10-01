class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        stack<int>st;
        unordered_map<int,int>mp; // {num2[i], nge}
        int n2 = nums2.size();
        mp[nums2[n2-1]] = -1;
        st.push(nums2[n2-1]);
        for(int i=n2-2; i>=0; i--){
            while(st.size() > 0 && nums2[i] > st.top()) st.pop();
            if(st.size()!=0) mp[nums2[i]] = st.top();
            else mp[nums2[i]] = -1;
            st.push(nums2[i]);
        }
        for(int i=0; i<nums1.size(); i++){
            if(mp.find(nums1[i])!=mp.end()){
                ans.push_back(mp[nums1[i]]);
            }
            else ans.push_back(-1);
        }
        return ans;
    }
};