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
        ListNode* fir=head;
        if(head==NULL)
            return NULL;
        ListNode* sec=head;
        fir=fir->next;
        
        if(fir==NULL)
            return NULL;
        sec=fir->next;
        if(sec==NULL)
            return NULL;
        while(fir!=sec)
        {
            fir=fir->next;
            
            sec=sec->next;
            if(sec!=NULL)
                sec=sec->next;
            if(sec==NULL ||fir==NULL)
                return NULL;
        }
        fir=head;
        while(fir!=sec)
        {
            fir=fir->next;
            sec=sec->next;
        }
        return fir;
        
    }
};