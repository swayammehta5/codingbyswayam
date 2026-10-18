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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small=new ListNode(0);
        ListNode* large=new ListNode(0);
        ListNode* smallcurr=small;
        ListNode* largecurr=large;
        ListNode* curr=head;
        while(curr!=NULL){
            if(curr->val<x){
                smallcurr->next=curr;
                smallcurr=smallcurr->next;
            }else{
                largecurr->next=curr;
                largecurr=largecurr->next;
            }
            curr=curr->next;
        }
        largecurr->next=NULL;
        smallcurr->next=large->next;
        return small->next;
    }
};