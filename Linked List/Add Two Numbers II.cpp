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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1->val==0)
            return l2;
        if(l2->val==0)
            return l1;
        stack<ListNode*>s1;
        stack<ListNode*>s2;
        ListNode* ot=NULL;
        ListNode* t1,*t2;
        t1=l1;
        t2=l2;
        int c=0;
        while(t1!=NULL)
        {
          s1.push(t1);
            t1=t1->next;
        }
         while(t2!=NULL)
        {
          s2.push(t2);
            t2=t2->next;
        }
        while(!s1.empty()||!s2.empty())
        {
            int x=c;
            if(!s1.empty())
            {
                x=x+s1.top()->val;
                s1.pop();
            }
            if(!s2.empty())
            {
                x=x+s2.top()->val;
                s2.pop();
            }
            ListNode *tm=new ListNode(x%10);
            tm->next=ot;
            ot=tm;
            c=x/10;
        }
        if(c>0)
        {
            ListNode *tm=new ListNode(c);
            tm->next=ot;
            ot=tm;
        }
        return ot;
    }
};