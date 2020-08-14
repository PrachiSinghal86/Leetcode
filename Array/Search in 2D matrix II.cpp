class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0||matrix[0].size()==0)
            return false;
        int r=0,c=0;
         while(c<matrix[0].size()&&matrix[matrix.size()-1][c]<target)
            {
                c+=1;
                
            }
        while(r<matrix.size()&& matrix[r][matrix[0].size()-1]<target)
            {
                r+=1;
                
            }
        
        while(r<matrix.size()&&c<matrix[0].size())
        {
         
           int s=c,e=matrix[0].size()-1;
            while(s<=e)
            {
              
                int m=(s+e)/2;
                if(matrix[r][m]==target)
                    return true;
                else if(matrix[r][m]<target)
                    s=m+1;
                else
                    e=m-1;
            }
            
            r+=1;
            
        }
        return false;
    }
};