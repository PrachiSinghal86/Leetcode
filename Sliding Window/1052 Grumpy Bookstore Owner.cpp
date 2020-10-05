class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int i,mx=0,cur=0,j=0;
        for(i=0;i<X;i++)
            mx=mx+customers[i];
        cur=mx;
        for(i=X;i<customers.size();i++)
        {
            if(grumpy[j]==1)
            {
                cur=cur-customers[j];
                
            }
            j+=1;
            cur=cur+customers[i];
            if(grumpy[i]==0)
                mx=mx+customers[i];
            mx=max(mx,cur);
        }
        return mx;
    }
};