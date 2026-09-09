class Solution {
public:
    Node* flatten(Node* head) {
       Node* temp = head;
        while( temp){
            Node* a = temp->next;
            if(temp->child){
                Node* c = temp->child;
                temp->next = c;
                temp->child = NULL;
                c->prev = temp;
                flatten(temp->next);
                while(c->next){
                    c = c->next;
                }
                c->next = a;
                if(a)a->prev = c;

            }
            temp = a;
        }
        return head;
    }
};