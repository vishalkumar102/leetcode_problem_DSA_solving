class CustomStack {
public:
    int maxSize;
    stack<int>stk;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(stk.size()<maxSize) stk.push(x);
    }
    
    int pop() {
        if(stk.size()){
            int ele = stk.top();
            stk.pop();
            return ele;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        stack<int>temp;
        while(stk.size()>k){
            temp.push(stk.top());
            stk.pop();
        }
        while(stk.size()){
            temp.push(stk.top()+val);
            stk.pop();
        }
        while(temp.size()){
            stk.push(temp.top());
            temp.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */