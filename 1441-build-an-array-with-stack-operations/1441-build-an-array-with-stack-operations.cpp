class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        if(target[0]==1){
            ans.push_back("Push");
        }
        else{
            int count = 1;
            while(count!=target[0]){
                ans.push_back("Push");
                ans.push_back("Pop");
                count++;
            }
            ans.push_back("Push");
        }
        for(int i=1; i<target.size(); i++){
            if(target[i]==(target[i-1]+1)){
                ans.push_back("Push");
            }
            else{
                int k = target[i-1];
                while((k+1)<target[i]){
                    ans.push_back("Push");
                    ans.push_back("Pop");
                    k++;
                }
                ans.push_back("Push");
            }
        }
        return ans;
    }
};