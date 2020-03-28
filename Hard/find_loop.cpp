// https://leetcode.com/problems/linked-list-cycle-ii/submissions/
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
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL){return head;}
        if(head->next==NULL){return NULL;}
        if(head->next==head){return head;}
        ListNode* temp1=head;
        ListNode *temp=head->next;
        int f=0;
        while(temp!=NULL && head!=NULL)
        {
            if(temp==head)
            {
                f=1;break;
            }
            if(temp->next==NULL)
            {
                return NULL;
            }
            temp=temp->next->next;
            head=head->next;
        }
        if(f==0){return NULL;}
        temp=temp->next;
        while(temp1!=temp)
        {
            temp=temp->next;
            temp1=temp1->next;
        }
        return temp;
        
    }
};