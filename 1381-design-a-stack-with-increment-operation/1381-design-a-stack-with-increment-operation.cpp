class CustomStack {
public:
    int maxSize;
    vector<int>arr;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
    }
    
    void push(int x) {
        if(arr.size()<maxSize) arr.push_back(x);
    }
    
    int pop() {
        if(arr.size()){
            int ele = arr[arr.size()-1];
            arr.pop_back();
            return ele;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        for(int i=0; i<k && i<arr.size(); i++){
            arr[i] = arr[i]+val;
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