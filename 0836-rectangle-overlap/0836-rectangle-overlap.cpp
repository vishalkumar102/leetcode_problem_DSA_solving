class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool xcheck = false, ycheck = false;
        if((rec1[0] < rec2[2] && rec1[2] > rec2[0])) xcheck = true;
        if((rec1[1] < rec2[3] && rec1[3] > rec2[1])) ycheck = true;
        if(xcheck && ycheck) return true;
        else return false;

    }
};