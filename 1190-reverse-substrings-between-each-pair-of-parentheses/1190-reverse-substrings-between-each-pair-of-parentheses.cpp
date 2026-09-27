class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=')') st.push(s[i]);
            else{
                string str = "";
                while(st.size() > 0 && st.top()!='('){
                    str += st.top();
                    st.pop();
                }
                st.pop();
                for(int i=0; i<str.size(); i++){
                    st.push(str[i]);
                }
            }
        }
        string ans;
        while(st.size()){
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};