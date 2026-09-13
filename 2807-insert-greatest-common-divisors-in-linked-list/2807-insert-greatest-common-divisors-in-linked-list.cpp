
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode* temp = head;
        while(temp->next!=NULL){
            int x = gcd(temp->val, temp->next->val);
            ListNode* t = new ListNode(x);
            t->next = temp->next;
            temp->next = t;
            temp = t->next;
        }
        return head;

    }
};