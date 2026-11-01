class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
        int n = grid[0].size();
        priority_queue<int>pq;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                pq.push(grid[i][j]);
                if(pq.size() > m*n/2+1) pq.pop();
            }
        }
        int ans = 0;
        int midele = pq.top();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int ele = abs(grid[i][j] - midele);
                if(ele%x!=0) return -1;
                ans += ele/x;
            }
        }
        return ans;
    }
};