class Solution {
public:
    int minAddToMakeValid(string s) {
        int result = 0;
        int left = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(') left++;
            else if(s[i]==')' && left==0) result++;
            else left--;
        }
        return left + result;
    }
};