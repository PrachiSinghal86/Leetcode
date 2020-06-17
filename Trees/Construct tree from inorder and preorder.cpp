class Solution 
{

public:

        TreeNode* p(vector<int>& ino,vector<int>& pos,int s,int e,int &index)

    {

        if(s>e)

        {

            return NULL;

        }

        int x=pos[index],i;

        index+=1;

        TreeNode * root=new TreeNode(x);

        for(i=s;i<=e;i++)

        {

            if(ino[i]==x)

                break;

        }

        root->left=p(ino,pos,s,i-1,index);

        root->right=p(ino,pos,i+1,e,index);

        return root;

        
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder)
 {
 
       int index=0;

        return p(inorder,preorder,0,preorder.size()-1,index);

    }
};