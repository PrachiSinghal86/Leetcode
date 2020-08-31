class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=0;
        if(matrix.size()==0)
            return;
        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[0][i]==0)
            { r=1;
             break;
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0;
                    for(int k=0;k<matrix[0].size();k++)
                    {
                        if(matrix[i][k]==0)
                            matrix[0][k]=0;
                        matrix[i][k]=0;
                    }
                    break;
                }
            }
        }
        for(int i=0;i<matrix[0].size();i++)
        {
            if(matrix[0][i]==0)
            {
                for(int j=0;j<matrix.size();j++)
                {
                    matrix[j][i]=0;
                }
            }
            else if(r==1)
        {
            matrix[0][i]=0;
        }
        }
        
    }
};