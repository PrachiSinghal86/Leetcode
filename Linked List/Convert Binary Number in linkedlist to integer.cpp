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
    int getDecimalValue(ListNode* head) {
        int ot=0;
        int c=0;
        ListNode*t=head;
        while(t!=NULL)
        {
            c=c*2;
            if(t->val==1)
                c+=1;
            t=t->next;
        }
        return c;
    }
};