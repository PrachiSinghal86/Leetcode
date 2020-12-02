class Solution {
public:
    void merge(vector<int>&nums,int s,int m,int e)
    {
        int n1=(m-s+1);
        int n2=e-m;
        int l1[n1],l2[n2];
        for(int i=0;i<n1;i++)
            l1[i]=nums[s+i];
        for(int i=0;i<n2;i++)
            l2[i]=nums[m+i+1];
        int i=0,j=0;
        for(int k=s;k<=e;k++)
        {
            if(j>=n2||(i<n1&&l1[i]<=l2[j]))
            {
                nums[k]=l1[i++];
            }
            else
                nums[k]=l2[j++];
        }
    }
    int ms(vector<int>&nums,int s,int e)
    {
        if(s<e)
        {
            int m=(s+e)/2;
            int c=ms(nums,s,m)+ms(nums,m+1,e);
            int j=m+1; 
            for(int i=s;i<=m;i++)
            {
                while(j<=e&&(nums[j]<-1073741824||(nums[j]<1073741824&&nums[i]>nums[j]*2)))
                    j++;
                c=c+(j-(m+1));
                if(j==e+1)
                {
                    c=c+(m-i)*(j-m-1);
                    break;
                }
            }
            merge(nums,s,m,e);
            return c;
        }
        else return 0;
    }
    int reversePairs(vector<int>& nums) {
        return ms(nums,0,nums.size()-1);
    }
};