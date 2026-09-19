class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i], i});
        }
        while(k--){
            int ele = pq.top().first;
            ele *= multiplier;
            int idx = pq.top().second;
            pq.pop();
            pq.push({ele, idx});
        }
        vector<int>ans(nums.size());
        while(pq.size() > 0){
            ans[pq.top().second] = pq.top().first;
            pq.pop();
        }
        return ans;
        
    }
};