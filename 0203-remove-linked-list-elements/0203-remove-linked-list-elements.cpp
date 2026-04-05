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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr) return head;
        while(head!=NULL && head->val==val){
            ListNode* temp=head;
            head=head->next;
            delete temp;
        }
        ListNode* curr=head;
        ListNode* prev=NULL;
        while(curr!=NULL){
            ListNode* forward=curr->next;
            if(curr->val==val){
                prev->next=forward;
                ListNode* temp=curr;    
                curr=forward;
                delete temp;
            }else{
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};