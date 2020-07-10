class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int l=arr.size(),c=0;
        int xr1=0,xr2=0,i,j,k;
        for(i=0;i<l-1;i++)
        {
            xr1=arr[i];
            for(j=i+1;j<l;j++)
            {
                xr2=arr[j];
                if(xr1==xr2)
                {
                    c+=1;
                    
                }
                for(k=j+1;k<l;k++)
                {
                    xr2=xr2^arr[k];
                    if(xr1==xr2)
                    {
                      c+=1;
                       
                    }
                }
                xr1=xr1^arr[j];
            }
            xr1=xr1^arr[i];
        }
        return c;
    }
};