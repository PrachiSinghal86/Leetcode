class Solution {
public:
    void subsetsUtil(vector<int>& A, vector<vector<int> >& res, 
                 vector<int>& subset, int index) 
{ 
    res.push_back(subset); 
    for (int i = index; i < A.size(); i++) { 
  
       
        subset.push_back(A[i]); 
  
     
        subsetsUtil(A, res, subset, i + 1); 
  
       
        subset.pop_back(); 
    } 
  
    return; 
} 
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset; 
        vector<vector<int>> res;
        subsetsUtil(nums,res,subset,0);
        return res;
        
    }
};