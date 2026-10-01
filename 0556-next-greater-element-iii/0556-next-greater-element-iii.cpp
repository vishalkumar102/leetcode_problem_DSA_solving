class Solution {
public:
    int nextGreaterElement(int n) {
        string str = "";
        while( n > 0){
            int num = n%10;
            n /= 10;
            str.push_back(num+'0');
        }
        reverse(str.begin(), str.end());
        if(str.size()==1) return -1;
        int idx = -1;
        for(int i=str.size()-2; i>=0; i--){
            if(str[i] < str[i+1]){
                idx = i;
                break;
            }
        }
        if(idx==-1) return -1;
        for(int i=str.size()-1; i>idx; i--){
            if(str[i] > str[idx]){
                swap(str[i], str[idx]);
                reverse(str.begin()+idx+1,str.end());
                break;
            }
        }
        
        long long ans = stoll(str);
        if(ans<=INT_MAX) return (int)ans;
        return -1;

    }
};