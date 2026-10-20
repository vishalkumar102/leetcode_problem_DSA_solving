class Solution {
public:
    int maximumGap(vector<int>& nums) {
        priority_queue<int>pq(nums.begin(), nums.end());
        int ans = 0;
        while(pq.size() > 0){
            int first = pq.top();
            pq.pop();
            if((first - pq.top()) > ans) ans = first - pq.top();
        }
        return ans;
    }
};