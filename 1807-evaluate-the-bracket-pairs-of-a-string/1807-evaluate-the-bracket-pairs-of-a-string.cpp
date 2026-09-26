class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string result = "";
        unordered_map<string, string>mp;
        for(int i=0; i<knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                i++;
                while(s[i]!=')'){
                    st.push(s[i]);
                    i++;
                }
                string str = "";
                while(st.size() > 0){
                    str = st.top()+str;
                    st.pop();
                }
                if(mp.find(str)!=mp.end()){
                    string key = mp[str];
                    result += key;
                }
                else result += '?';
            }
            else result += s[i];
        }
        return result;
    }
};