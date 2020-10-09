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
    bool hasCycle(ListNode *head) {
     ListNode *sl=head;
        if(head==NULL)
            return false;
        ListNode *f=head->next;
        while(f!=sl)
        {
            if(f==NULL)
                return false;
            sl=sl->next;
            f=f->next;
            if(f==NULL)
                return false;
            else
                f=f->next;
            
        }
        return true;
    }
};