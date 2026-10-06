class Solution {
public:
    int scoreOfParentheses(string s) {
        int result = 0;
        int count = 0;
        bool flag = false;
        for(int i=0; i<s.size(); i++){
            while(s[i]=='('){
                count++;
                i++;
                flag = true;
            }
            if(flag) result += pow(2, count-1);

            if(s[i]==')') {
                count--;
                flag = false;
            }

        }
        return result;
    }
};