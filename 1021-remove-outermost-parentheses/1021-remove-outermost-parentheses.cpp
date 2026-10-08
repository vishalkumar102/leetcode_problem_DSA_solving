class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int left = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                i++;
                while(left!=0 || s[i]=='('){
                    ans += s[i];
                    if(s[i]=='(') left++;
                    else left--;
                    i++;

                }
            }
        }
        return ans;
    }
};