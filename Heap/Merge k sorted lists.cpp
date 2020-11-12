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
typedef pair<int,ListNode*>ppi;
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
            return NULL;
        priority_queue <ppi,vector<ppi>,greater<ppi>>pq;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i]!=NULL)
            pq.push({lists[i]->val,lists[i]});
        }
        ListNode* head=NULL;
        ListNode*tmp=NULL;
        while(!pq.empty())
        {
            ppi cur=pq.top();
            ListNode* t=new ListNode(cur.first);
            if(head==NULL)
            {
                head=t;
                tmp=t;
            }
            else
            {
                tmp->next=t;
                tmp=tmp->next;
            }
            pq.pop();
            if(cur.second->next!=NULL)
            {
                pq.push({cur.second->next->val,cur.second->next});
            }
                
        }
        return head;
        
    }
};