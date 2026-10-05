class Solution {
public:
    int scoreOfParentheses(string s) {
        int result = 0;
        int count = 0;
        bool flag = false;
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            while(s[i]=='('){
                count++;
                st.push(s[i]);
                i++;
                flag = true;
            }
            if(flag) result += pow(2, count-1);

            if(s[i]==')') {
                count--;
                st.pop();
                flag = false;
            }

        }
        return result;
    }
};