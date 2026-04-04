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
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==nullptr){
            return head;
        }
        int cnt=1;
        ListNode* new1=head;
        while(cnt<k){
            new1=new1->next;
            cnt++;
        }
        int n=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            n++;
        }
        int lastPosition= n-k+1;
        cnt=1;
        ListNode* new2=head;
        while(cnt<lastPosition){
            new2=new2->next;
            cnt++;
        }
        int t=new1->val;
        new1->val=new2->val;
        new2->val=t;
        return head;



    }
};