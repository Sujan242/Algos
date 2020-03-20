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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t=head;
        ListNode*t2=head;
        for(int i=0;i<n;i++)
        {
            t=t->next;
        }
        if(t==NULL)
        {
            return head->next;
        }
        while(t->next!=NULL)
        {
            t=t->next;
            t2=t2->next;
        }
        t2->next=t2->next->next;
        
        
        

        
      
        return head;
        
        
    }
};