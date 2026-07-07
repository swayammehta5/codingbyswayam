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
// class Solution {
// public:
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==nullptr){
//             return head;
//         }
//         ListNode* curr=head;

//         while(curr!=NULL){
//             if((curr->next!=NULL) &&(curr->val==curr->next->val)){
//                 ListNode* next_next=curr->next->next;
//                 ListNode* nodeToDelete=curr->next;
//                 delete(nodeToDelete);
//                 curr->next=next_next;
//             }else{
//                 curr=curr->next;
//             }
//         }
//         return head;
//     }
// };
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL)
            return head;

        unordered_set<int> st;

        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL) {
            if (st.find(curr->val) != st.end()) {
                // Duplicate found
                prev->next = curr->next;
                ListNode* temp = curr;
                curr = curr->next;
                delete temp;
            } else {
                // First occurrence
                st.insert(curr->val);
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};