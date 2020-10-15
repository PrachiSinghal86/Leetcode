class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s=0;
        for(int i=0;i<mat.size();i++)
            {
            s=s+mat[i][i];
            s=s+mat[i][mat.size()-i-1];
        }
        if(mat.size()%2!=0)
            s=s-mat[mat.size()/2][mat.size()/2];
        return s;
    }
};