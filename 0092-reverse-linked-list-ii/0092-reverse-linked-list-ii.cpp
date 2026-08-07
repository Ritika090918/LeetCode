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
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode* t=head;
        ListNode* leftPre=dummy;
        for(int i=0; i<left-1; i++){
            leftPre=leftPre->next;
            t=t->next;
        }
        ListNode* SubListNode=t;
        ListNode* PreNode=NULL;
        for(int i=0; i<=right-left; i++){
           ListNode* nextHead=t->next;
           t->next=PreNode;
           PreNode=t;
           t=nextHead;
        }
        leftPre->next=PreNode;
        SubListNode->next=t;
        return dummy->next;
    }
};