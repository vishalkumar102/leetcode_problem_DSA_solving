class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(s[i]>='a' && s[i]<='z') ans += s[i];
            if(s[i]=='(')st.push(ans.size());
            else if(s[i]==')'){
                reverse(ans.begin()+st.top(), ans.end());
                st.pop();
            }
        }
        return ans;
    }
};