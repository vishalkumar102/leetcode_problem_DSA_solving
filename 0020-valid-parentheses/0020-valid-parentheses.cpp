class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2!=0) return false;
        stack<char>st;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(s[i]=='(') st.push('(');
            else if(s[i]=='{') st.push('{');
            else if(s[i]=='[') st.push('[');
            else if(st.size()!=0 && s[i]==')'){
                if(st.top()=='(') st.pop();
                else return false;
            }
            else if(st.size()!=0 && s[i]=='}'){
                if(st.top()=='{') st.pop();
                else return false;
            }
            else if(st.size()!=0 && s[i]==']'){
                if(st.top()=='[') st.pop();
                else return false;
            }
            else if(st.size()==0 && (s[i]==')' || s[i]=='}' || s[i]==']')) return false;
        }
        if(st.size()==0) return true;
        else return false;
    }
};