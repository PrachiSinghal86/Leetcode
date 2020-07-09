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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
       int c=1;
        ListNode* temp=head;
        if(m==n)
            return head;
        while(c<m-1)
        {
            temp=temp->next;
            c++;
        }
        
        ListNode* cur=temp->next->next;
        ListNode* nexti=cur;
        ListNode* prev=temp->next;
        c+=1;
        while(c<n)
        {
            nexti=cur->next;
            cur->next=prev;
            prev=cur;
            cur=nexti;
            c++;
        }
        if(m==1)
        {
            temp->next->next=temp;
            temp->next=nexti;
            head=prev;
        }
        else{
        temp->next->next=nexti;
        temp->next=prev;}
        return head;
        
    }
};