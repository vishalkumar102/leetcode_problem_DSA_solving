class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*>st;
        while(temp){
            if(st.size()==0 || st.top()->val >= temp->val){
                st.push(temp);
                temp = temp->next;
            }
            else{
                while(st.size() > 0 && st.top()->val < temp->val) st.pop();
                if(st.size()==0) head = temp;
                else{
                    ListNode* t = st.top();
                    t->next = temp;
                    st.push(temp);
                    temp = temp->next;
                }
            }
        }
        return head;
    }
};