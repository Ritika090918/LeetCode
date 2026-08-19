/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t=headA;
       ListNode  *t1=headB;
        int c=0;
        while(t!=NULL){
            c++;
            t=t->next;
        }
  
        int c1=0;
        while(t1!=NULL){
            c1++;
            t1=t1->next;
        }
       
        ListNode *p=headA;
        ListNode *p1=headB;
        if(c1>c){
            int k=c1-c;
        
        for(int i=0; i<k; i++){
            p1=p1->next;
        }
        }
       
         else if(c>c1){
            int k=c-c1;
        
        for(int i=0; i<k; i++){
            p=p->next;
        }
         }
           while(p1!=p){
            p1=p1->next;
            p=p->next;
        }
        
        return p;
    }
};