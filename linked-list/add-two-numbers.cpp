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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        int carry=0,digit=0;
        ListNode* dummy=new ListNode(0);
        ListNode* curr3=dummy;
        while(curr1||curr2||carry){
            int sum=0;
            if(curr1){
                sum+=curr1->val;
            }
            if(curr2){
                sum+=curr2->val;
            }
            sum+=carry;
            carry=sum/10;
            digit=sum%10;
            curr3->next=new ListNode(digit);
            curr3=curr3->next;
            if(curr1){
                curr1=curr1->next;
            }
            if(curr2){
                curr2=curr2->next;
            }
        }
        return dummy->next;
    }
};