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
    ListNode* reverse(ListNode* head){
        ListNode* curr=head;
        ListNode* prev=nullptr;
        while(curr){
            ListNode* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr=head;
        ListNode* prev=nullptr;
        for(int i=0;i<k;i++){
            if(curr==nullptr){
                return head;
            }
            prev=curr;
            curr=curr->next;
        }
        ListNode* remain=curr;
        prev->next=nullptr;
        ListNode* newhead=reverse(head);
        ListNode* result=reverseKGroup(remain, k);
        head->next=result;
        return newhead;
    }
};