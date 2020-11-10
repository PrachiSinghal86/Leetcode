class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
         int n=A[0].size();
        for(int i=0;i<A.size();i++)
        {
            
            for(int j=0;j<(n)/2;j++)
            {
                int t=A[i][j];
                A[i][j]=A[i][n-j-1];
                A[i][n-j-1]=t;
                
                if(A[i][j]==0)
                    A[i][j]=1;
                else if(A[i][j]==1)
                    A[i][j]=0;
                if(A[i][n-j-1]==0)
                    A[i][n-1-j]=1;
                else if(A[i][n-j-1]==1)
                    A[i][n-j-1]=0;
               // cout<<A[i][j]<<A[i][n-j-1];
                //cout<<A[i][j];
            }
            if(n%2!=0)
            {
                if(A[i][(n+1)/2-1]==0)
                A[i][(n+1)/2-1]=1;
                    else
                    A[i][(n+1)/2-1]=0;    
            }
            
        }
        return A;
    }
};