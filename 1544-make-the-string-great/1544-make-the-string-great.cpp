class Solution {
public:
    string makeGood(string s) {
        int i = 0;
        string ans = "";
        for(int i=0; i<s.size(); i++){
            if(ans.size() > 0 && abs(ans[ans.size()-1]-s[i])==32) ans.pop_back();
            else ans.push_back(s[i]);
        }
        return ans;
    }
};