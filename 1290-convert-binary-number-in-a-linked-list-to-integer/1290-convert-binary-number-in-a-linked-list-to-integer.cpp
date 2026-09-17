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
    int binaryToInteger(string s){
        int num = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1') num += pow(2,i);
        }
        return num;

    }
    int getDecimalValue(ListNode* head) {
        string s = "";
        ListNode* temp = head;
        while(temp){
            char ch;
            if(temp->val==1) ch = '1';
            else ch = '0';
            s = ch + s;
            temp = temp->next;
        }

        return binaryToInteger(s);

    }
};