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
    ListNode* merge(ListNode* l1,ListNode* l2){
        ListNode* l3=new ListNode();
        ListNode* curr1=l1;
        ListNode* curr2=l2;
        ListNode* curr3=l3;
        while(curr1 || curr2){
            if(curr1 && curr2){
                if(curr1->val<curr2->val){
                curr3->next=curr1;
                curr1=curr1->next;
                curr3=curr3->next;
            }
            else{
                curr3->next=curr2;
                curr2=curr2->next;
                curr3=curr3->next;
            }
            }
            else if(curr1==nullptr){
            curr3->next=curr2;
            curr2=curr2->next;
            curr3=curr3->next;
           }
            else{
            curr3->next=curr1;
            curr3=curr3->next;
            curr1=curr1->next;
        }
        }
        return l3->next;
    }
    ListNode* solve(vector<ListNode*>& lists,int start,int end){
        ListNode* l;
        ListNode* r;
        int mid=(start+end)/2;
        if(start==end){
            return lists[start];
        }
        else{
            l=solve(lists,start,mid);
            r=solve(lists,mid+1,end);
        }
        return merge(l,r);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return nullptr;
        }
        else{
            return solve(lists,0,lists.size()-1);
        }
    }
};