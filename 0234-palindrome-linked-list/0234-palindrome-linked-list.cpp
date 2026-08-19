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

  ListNode *reverse(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr != NULL) {
        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }

        return prev;
    }
    bool isPalindrome(ListNode* head) {
        ListNode *t=head;
        int c=0;
        while(t!=NULL){
            c++;
            t=t->next;
        }
      
    ListNode *s=head;
    ListNode *f=head;
            if(c%2==0){
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;
    }
   
   ListNode *s1=s;
   s1= reverse(s1);
   ListNode* p = head;

while(s1 != NULL) {
    if(p->val != s1->val)
        return false;

    p = p->next;
    s1 = s1->next;
}

return true;
            }
            if(c%2!=0){
                while(f!=NULL && f->next!=NULL){
                    s=s->next;
                    f=f->next->next;
                }
                s=s->next;
                ListNode *s2=s;
               s2= reverse(s2);
               ListNode* p = head;

while(s2!= NULL) {
    if(p->val != s2->val)
        return false;

    p = p->next;
    s2 = s2->next;
}

return true;
            }
            return false;
            
        }
    };
