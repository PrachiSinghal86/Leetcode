class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        
        int n=A[0].size();
        int i;
        if(A.size()==1)
        {
            return A[0][0];
        }
        
      
        for(int i=1;i<A.size();i++)
        {
            A[i][0]+=min(A[i-1][0],A[i-1][1]);
           
        }
        int j;
        for(i=1;i<A.size();i++)
        
        {
            for( j=1;j<A[0].size()-1;j++)
            {
                A[i][j]+=min(min(A[i-1][j],A[i-1][j-1]),A[i-1][j+1]);
            }
             A[i][j]+=min(A[i-1][j],A[i-1][j-1]);
        }
         int m=A[j][0];
            for(i=1;i<n;i++)
                m=min(m,A[j][i]);
            return m;
        
    }
};