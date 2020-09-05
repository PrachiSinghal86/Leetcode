class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=0;
        
            int t;
        while(k<=j)
            {
               
               if(nums[k]==0)
                   {
                   t=nums[k];
                   nums[k]=nums[i];
                   nums[i]=t;
                   i++;
                   if(k==i-1)
                       k++;
                   }
            else if(nums[k]==2)
                {
                t=nums[k];
                   nums[k]=nums[j];
                   nums[j]=t;
                   j--;
                
            }
            else
                k++;
        
            }
        
    }
};