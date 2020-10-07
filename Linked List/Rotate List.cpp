class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* t=head;
        int c=0;
        if(t==NULL)
            return t;
        
        while(t->next!=NULL)
        {
            c+=1;
            t=t->next;
        }
        c=c+1;
       int n=c;
        c=k%c;
       n=n-c-1;
      
        ListNode* tm=head;
        while(n)
        {
            n-=1;
            tm=tm->next;
        }
        t->next=head;
        head=tm->next;
        tm->next=NULL;
        return head;
        
    }
};