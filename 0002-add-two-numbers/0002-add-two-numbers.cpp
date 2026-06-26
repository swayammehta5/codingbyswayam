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
    void insertAtTail(ListNode* &head,ListNode* &tail,int data){
        ListNode* temp=new ListNode(data);
        if(head==nullptr){
            head=temp;
            tail=temp;
            return;
        }
        tail->next=temp;
        tail=temp;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ansHead=NULL;
        ListNode* ansTail=NULL;
        int carry=0;
        while(l1!=nullptr && l2!=nullptr){
            int sum=carry+l1->val +l2->val;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=nullptr){
            int sum=carry+l1->val;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            l1=l1->next;
            // l2=l2->next;
        }
        while(l2!=nullptr){
            int sum=carry +l2->val;
            int digit=sum%10;
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            l2=l2->next;
        }
        if(carry){
            insertAtTail(ansHead,ansTail,carry);
        }
        return ansHead;

    }
};