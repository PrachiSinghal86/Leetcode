class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0)
            return false;
        if(matrix[0].size()==0)
            return false;
        int r=0,c=matrix[0].size()-1;
        
        if(target<matrix[0][0])
            return false;
        while(r<matrix.size())
        {
            if(matrix[r][c]<target)
                r+=1;
            else
            {
                break;
            }
        }
        if(r==matrix.size())
            return false;
        int s=0;
        while(s<=c)
        {
            int m=(s+c)/2;
            if(matrix[r][m]==target)
                return true;
            else if(target<matrix[r][m])
                c--;
            else
                s++;
        }
        return false;
    }
};