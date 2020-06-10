class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return nums[0];
        }
        int a[n][n],i,len,rg;
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[i][j]=0;
            }
        }
        for(len=1;len<=n;len++)
        {   
            
            for(i=0;i<=n-len;i++)
            {
                rg=i+len-1;
                for(int j=i;j<=rg;j++)
                {
                    int x=nums[j];
                    if(i>0)
                    {
                        x=x*nums[i-1];
                    }
                    if(rg<n-1)
                    {
                        x=x*nums[rg+1];
                        
                    }
                    if(j-i!=0)
                    {
                        x=x+a[i][j-1];
                        
                    
                        
                    }
                    if(j!=rg)
                    {
                        x=x+a[j+1][rg];
                      
                    }
                   if(x>a[i][rg])
                   {
                       a[i][rg]=x;
                   }
                    
                }
                
            }
        }
        
        return(a[0][n-1]);
    }
};