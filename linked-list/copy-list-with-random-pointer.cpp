/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr=head;
        while(curr){
            Node* copy=new Node(curr->val);
            copy->next=curr->next;
            curr->next=copy;
            curr=curr->next->next;
        }
        curr=head;
        while(curr){
            Node* copy=curr->next;
            if(curr->random==nullptr){
                copy->random=nullptr;
            }
            else{
                copy->random=curr->random->next;
            }
            curr=curr->next->next;
        }
        curr=head;
        if(head==NULL){
            return NULL;
        }
        Node* newcurr=head->next;
        while(curr&&newcurr){
            Node* copy=curr->next;
            curr->next=copy->next;
            if(copy->next!=NULL){
                copy->next=copy->next->next;
            }
            curr=curr->next;
        }
        return newcurr;
    }
};