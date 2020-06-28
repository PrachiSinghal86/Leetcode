/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node * temp;
        if(head==NULL)
            return NULL;
        temp=head;
        while(temp)
        {
            Node* n=new Node(temp->val);
            n->next=temp->next;
            temp->next=n;
            temp=temp->next->next;
        }
        temp=head;
        while(temp)
        {
            if(temp->random==NULL)
            {
                temp->next->random=NULL;
            }
            else
            {
                temp->next->random=temp->random->next;
            }
            
            temp=temp->next->next;
        }
        Node *head2=head->next;
        Node *temp2=head2;
        temp=head;
        while(temp)
        {
            temp->next=temp2->next;
            if(temp->next==NULL)
            {
                temp2->next=NULL;
            }
            else
            {
                temp2->next=temp->next->next;
            }
            
            temp=temp->next;
            temp2=temp2->next;
        }
        return head2;
    }
};