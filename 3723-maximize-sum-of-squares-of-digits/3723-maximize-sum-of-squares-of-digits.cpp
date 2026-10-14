class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        while(num>=1 && sum >=9 ){
            ans.push_back('9');
            sum -= 9;
            num--;
        }
        if(num!=0 && sum!=0){
            ans.push_back(sum +'0');
            num--;
            sum = 0;
        }
        if(num==0 && sum!=0) return "";
        while(num){
            ans.push_back('0');
            num--;
        }
        return ans;
    }
};