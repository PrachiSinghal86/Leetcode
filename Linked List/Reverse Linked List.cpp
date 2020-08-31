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
    ListNode* reverseList(ListNode* head) {
       
        ListNode* cur=head;
        if(head==NULL)
            return head;
        ListNode* nxt=cur->next;
        ListNode* prev=NULL;
        while(nxt)
        {
           cur->next=prev;
           prev=cur;
           cur=nxt;
            nxt=nxt->next;
        }
        
        cur->next=prev;
        head=cur;
        return head;
    }
};