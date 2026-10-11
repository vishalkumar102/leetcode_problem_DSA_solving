class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int result = 0;
        int n = arr.size(); 
        result = arr[0];
        for(int i=1; i<arr.size(); i++){
            result += arr[i];
            arr[i] = arr[i] + arr[i-1];
        }
        for(int i=0; i<n; i++){
            for(int j=i+2; j<n; j+=2){
               if(i==0) result += arr[j];
               else result += (arr[j] - arr[i-1]);
            }
        }
        return result;
        
    }
};