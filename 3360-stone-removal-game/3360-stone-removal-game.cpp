class Solution {
public:
    bool canAliceWin(int n) {
        int move = 10;
        while(n > 0){
            if(move > n) return false;
            n -= move;
            move--;
            if(move==n) return false;
            if(move > n) return true;
            n -= move;
            move--;
        }
        return true;
    }
};