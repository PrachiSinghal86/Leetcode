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
    ListNode* insertionSortList(ListNode* head) {
        if(head==NULL)
    {
         
         return head;   
        
    }
    ListNode*l=new ListNode(head->val);
   
     
    ListNode* temp=head->next;
    while(temp!=NULL)
    {
       ListNode *t1=l;
       if(l->val>=temp->val)
       {
           ListNode*t2=new ListNode(temp->val);
           t2->next=t1;
           l=t2;
       }
         else
       {
           while(t1->next!=NULL)
           {
               if(t1->next->val>=temp->val)
               {
                   ListNode*t2=new ListNode(temp->val);
                   t2->next=t1->next;
                   t1->next=t2;
                   break;
               }
               t1=t1->next;
           }
           if(t1->next==NULL)
           {
               ListNode*t2=new ListNode(temp->val);
               t1->next=t2;
           }
       }
       temp=temp->next;
      
    }
    return l;
    }
};