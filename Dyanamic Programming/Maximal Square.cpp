class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0||matrix[0].size()==0)
            return 0;
     int m=matrix.size();
        int n=matrix[0].size();
        int mx=48;
        for(int i=0;i<m;i++)
        {
            if(matrix[i][0]=='1')
            { mx=49;
             break;
            }
        }
        if(mx!=49)
        {
             for(int i=0;i<n;i++)
        {
            if(matrix[0][i]=='1')
            { mx=49;
             break;
            }
        }
            
        }
     for(int i=1;i<m;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(matrix[i][j]=='1')
            {
            char mn=min(matrix[i-1][j],matrix[i][j-1]);
            matrix[i][j]=1+min(mn,matrix[i-1][j-1]);
            mx=int(max(int(matrix[i][j]),mx));
            }

        }
    }
    return (mx-48)*(mx-48);
    return 0;
    }
};