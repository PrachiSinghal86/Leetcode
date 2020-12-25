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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* temp=NULL;
        ListNode* cur=head;
        ListNode * fp=head->next;
        while(cur!=NULL)
        {
            if(cur->next==NULL)
                return fp;
            if(temp==NULL)
                temp=cur->next;
            else 
            {temp->next=cur->next;
             temp=temp->next;
            }
            cur->next=temp->next;
            
            temp->next=cur;
            temp=temp->next;
            cur=temp->next;
        }
        return fp;

    }
};