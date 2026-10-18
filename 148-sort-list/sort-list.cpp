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
    ListNode* sortList(ListNode* head) {
        if(head==NULL) return NULL;
        vector<int>ans;
        ListNode* curr=head;
        while(curr!=NULL){
            ans.push_back(curr->val);
            curr=curr->next;
        }
        sort(ans.begin(),ans.end());
        curr=head;
        int i=0;
        while(curr!=NULL){
            curr->val=ans[i];
            i++;
            curr=curr->next;
        }
        return head;


    }
};