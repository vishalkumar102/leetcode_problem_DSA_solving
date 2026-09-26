class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string result = "";
        unordered_map<string, string>mp;
        for(int i=0; i<knowledge.size(); i++){
            mp[knowledge[i][0]] = knowledge[i][1];
        }
     
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('){
                string key = "";
                i++;
                while(s[i]!=')'){
                    key += s[i];
                    i++;
                }
                
                if(mp.find(key)!=mp.end()){
                    string val = mp[key];
                    result += val;
                }
                else result += '?';
            }
            else result += s[i];
        }
        return result;
    }
};