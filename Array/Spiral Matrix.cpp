class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ot;
        if(matrix.size()==0)
            return ot;
        int l=0,r=matrix[0].size()-1,u=0,b=matrix.size()-1;
        int d=0,i;
      
        
        while(l<=r&&u<=b)
        {
            if(d==0)
            {
                for(i=l;i<=r;i++)
                {
                    ot.push_back(matrix[u][i]);
                }
                u++;
                d=1;
            }
            else if(d==1)
            {
                 for(i=u;i<=b;i++)
                {
                    ot.push_back(matrix[i][r]);
                }
                r--;
                d=2;
            }
              else if(d==2)
            {
                 for(i=r;i>=l;i--)
                {
                    ot.push_back(matrix[b][i]);
                }
                b--;
                d=3;
            }
             else if(d==3)
            {
                 for(i=b;i>=u;i--)
                {
                    ot.push_back(matrix[i][l]);
                }
                l++;
                d=0;
            }
        }
        return ot;
        
    }
};