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
        int n1=leng(headA);
        int n2=leng(headB);
        ListNode *temp,*t1;
        int c=0;
        if(n1>=n2)
        {
            c=n1-n2;
            temp=headA;
            t1=headB;
            
        }
        else
        {
            c=n2-n1;
            temp=headB;
            t1=headA;
        }
        while(c>0)
        {
            temp=temp->next;
            c-=1;
        }
        while(temp!=NULL)
        {
            if(temp==t1)
                return temp;
            temp=temp->next;
            t1=t1->next;
        }
        return NULL;
        
    }
    int leng(ListNode* root)
    {
        int c=0;
        while(root!=NULL)
        {
            c+=1;
            root=root->next;
        }
        return c;
    }
};