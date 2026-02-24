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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right || head==nullptr){
            return head;
        }
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode* forward=nullptr;
        ListNode* curr= prev->next;
        for(int i=0;i<right-left;i++){
            forward =curr->next;
            curr->next=forward->next;
            forward->next=prev->next;
            prev->next=forward;
        }
        return dummy->next;
    }
};