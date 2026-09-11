/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode *p = NULL,*q = NULL, *r = NULL; 
        for(int i=0; i<= b; i++){
            if(i==a-1) p = temp;
            if(i==b) q = temp;
            temp = temp->next;
        } 
        ListNode* temp2 = list2;
        while(temp2->next) temp2 = temp2->next;
        p->next = list2;
        temp2->next = temp;
        return list1;
    }
};