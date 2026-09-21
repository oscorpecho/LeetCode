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
ListNode* reverse(ListNode* list){
    ListNode* curr=list;
    ListNode* prev=nullptr;
    while(curr){
        ListNode* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
    void reorderList(ListNode* head) {
        ListNode* curr=head;
        int size=0;
        while(curr){
            size++;
            curr=curr->next;
        }
        int mid;
        if(size%2==0){
            mid=size/2;
        }
        else{
            mid=(size/2)+1;
        }
        curr=head;
        for(int i=1;i<mid;i++){
            curr=curr->next;
        }
        ListNode* remain=curr->next;
        curr->next=nullptr;
        ListNode* rev=reverse(remain);
        ListNode* temp=rev;
        curr=head;
        while(curr&&temp){
            ListNode* currnext=curr->next;
            ListNode* tempnext=temp->next;
            curr->next=temp;
            temp->next=currnext;
            curr=currnext;
            temp=tempnext;
        }
        }
};