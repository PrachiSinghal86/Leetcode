class Node 
{
    public:
    int val;
    int count;
    Node*left;
    Node* right;
    Node(int x)
    {
     val=x;
    count=0;
    left=NULL;
    right=NULL;}
};
int cnt(Node*& root,int v,int c)
{
    if(root==NULL)
    {
        root=new Node(v);
        return c;
    }
    else if(root->val<v)
    {
        return root->count+cnt(root->right,v,c+1);
    }
    else
    {
        root->count++;
        return cnt(root->left,v,c);
    }
}
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        Node*root=NULL;
        for(int i=nums.size()-1;i>=0;i--)
            nums[i]=cnt(root,nums[i],0);
        return nums;
    }
};