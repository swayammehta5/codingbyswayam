
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> st;
        ListNode* curr = head;

        while (curr != NULL) {
            st.insert(curr->val);
            curr = curr->next;
        }

        ListNode* newHead = NULL;
        ListNode* tail = NULL;

        for (int val : st) {
            ListNode* temp = new ListNode(val);

            if (newHead == NULL) {
                newHead = temp;
                tail = temp;
            } else {
                tail->next = temp;
                tail = temp;
            }
        }

        return newHead;
    }
};
