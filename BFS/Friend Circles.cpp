class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        vector<int>v(M.size(),0);
        int c=0;
        for(int i=0;i<M.size();i++)
        {
            queue<int>q;
            if(v[i]==1)
                continue;
            v[i]=1;
            c+=1;
            q.push(i);
            while(!q.empty())
            {
                for(int j=0;j<M.size();j++)
                {
                    if(v[j]==0&&M[q.front()][j]==1)
                    {
                        v[j]=1;
                        q.push(j);
                    }
                }
                q.pop();
            }
        }
        return c;
    }
};