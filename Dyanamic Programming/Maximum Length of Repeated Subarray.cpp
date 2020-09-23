class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int dp[A.size()][B.size()],i,j,m=0;
        for(i=0;i<B.size();i++)
        {
            if(A[0]==B[i])
            {
                dp[0][i]=1;
            }
            else
            {
                dp[0][i]=0;
            }
        }
         for(i=1;i<A.size();i++)
        {
            if(B[0]==A[i])
            {
                dp[i][0]=1;
            }
              else
            {
                dp[i][0]=0;
            }
        }
        for(i=1;i<A.size();i++)
        {
            for(j=1;j<B.size();j++)
            {
                if(A[i]==B[j])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    m=max(dp[i][j],m);
                }
                else
                {
                    dp[i][j]=0;
                }
            }
        }
        return m;
    }
}
;