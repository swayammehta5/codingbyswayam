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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr){
            return nullptr;
        }
        ListNode* check=head;
        for(int i=0;i<k;i++){
            if(check==nullptr){
                return head;
            }
            check=check->next;
        }
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* forward=nullptr;
        int count=0;
        while(curr!=nullptr && count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=nullptr){
            head->next=reverseKGroup(forward,k);
        }
        return prev;
    }
};