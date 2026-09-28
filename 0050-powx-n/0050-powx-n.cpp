class Solution {
public:
    double helper(double x, long long int n){
        if(n==0) return x;
        double temp = myPow(x, n/2);
        if(n%2==0) return temp*temp;
        else return x*temp*temp;
    }
    double myPow(double x, int n) {
        if(x==1 || n==0) return 1;
        bool flag = false;
        long long int t = n;
        
        if(t < 0){
            flag = true;
            t *= -1;
        }
        
        double result = helper(x, t);
        if(n==INT_MIN) result*x;
        if(flag==true) return 1/result;
        return result;
    }
};