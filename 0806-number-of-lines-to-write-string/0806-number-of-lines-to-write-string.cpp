class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line = 0;
        int pixels = 0;
        for(int i=0; i<s.size(); i++){
            pixels += widths[(int)(s[i]-'a')];
            if(pixels==0){
                line++;
                pixels = 0;
            }
            else if(pixels > 100){
                line++;
                pixels = widths[s[i]-'a'];
            }
        }
        if(pixels!=0) line++;
       return {line, pixels};
    }
};