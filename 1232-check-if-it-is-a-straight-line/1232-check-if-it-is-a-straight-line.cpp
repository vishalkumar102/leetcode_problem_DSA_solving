class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& cod) {
        bool flag = false;
        if(cod[0][0] == cod[1][0]) flag = true;
        float m = (float)(cod[0][1]-cod[1][1])/(float)(cod[0][0]-cod[1][0]);
        float c = cod[0][1] - m*cod[0][0];
        for(int i=1; i<cod.size(); i++){
            if(flag==true && cod[i][0]!=cod[i-1][0]) return false;
            else if(flag==true) continue;
            if((float)(cod[i][1]-m*cod[i][0])!=c) return false;
        }
        return true;
    }
};