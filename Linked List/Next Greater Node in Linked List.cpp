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
    vector<int> nextLargerNodes(ListNode* head) {
        stack<ListNode*>st;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            while(!st.empty()&&st.top()->val<temp->val)
            {
                st.top()->val=temp->val;
                st.pop();
            }
            st.push(temp);
            temp=temp->next;
        }
        while(!st.empty())
        {
            st.top()->val=0;
            st.pop();
        }
        vector<int>ot;
        temp=head;
        while(temp!=NULL)
        {
            ot.push_back(temp->val);
            temp=temp->next;
        }
        return ot;
    }
};