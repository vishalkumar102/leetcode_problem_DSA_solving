
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>nge;
        ListNode* temp = head;
        while(temp){
            nge.push_back(temp->val);
            temp = temp->next;
        }
        int n = nge.size();
        stack<int>st;
        st.push(nge[n-1]);
        nge[n-1] = 0;
        for(int i=n-2; i>=0; i--){
            int ele = nge[i];
            while(st.size() > 0 && st.top() <= nge[i]) st.pop();
            if(st.size()!=0) nge[i] = st.top();
            else nge[i] = 0;
            st.push(ele);
        }
        return nge;
    }
};