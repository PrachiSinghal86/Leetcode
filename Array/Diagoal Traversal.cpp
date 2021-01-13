class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
       int n=matrix.size();
        vector<int> a;
        
        if(n==0) return a;
        
        int m=matrix[0].size(), p=1;
        
        for(int k=0; k<m; k++){
            if(p==0){
             for(int i=0; i<=k && i<n; i++){
                a.push_back(matrix[i][k-i]); }
                p=1;
            }
            else {  
             for(int i=min(k,n-1); i>=0; i--){
                  a.push_back(matrix[i][k-i]);
                }
                p=0;
            }            
        }
        
    
        for(int k=m; k<m+n-1; k++){
            if(p==0){
            for(int i=k-m+1; i<min(n,k+1); i++){
                a.push_back(matrix[i][k-i]); }
                p=1;
                }
            
             else{
               for(int i=max(0,k-n+1); i<m; i++){         
                   a.push_back(matrix[k-i][i]);
                }
                 p=0;
            }
        }
        return a;
    }
};