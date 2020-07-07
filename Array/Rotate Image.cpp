class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int i,j;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                int t=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=t;
                
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n/2;j++)
            {
                int t=matrix[i][j];
                matrix[i][j]=matrix[i][n-j-1];
                matrix[i][n-j-1]=t;
            }
        }
    }
};