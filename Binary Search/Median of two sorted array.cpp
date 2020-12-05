class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size())
        {
            vector<int>tp;
            tp=nums2;
            nums2=nums1;
            nums1=tp;
        }
         int m=nums1.size();
        int n=nums2.size();
        //cout<<n;
        int t=(n+m+1)/2;
        if(m==0)
        {
         
            if(n%2==0)
            {
                //cout<<"a";
                return double(nums2[n/2-1]+nums2[n/2])/2;
            }
            else
                return nums2[n/2];
        }
        /*if(nums2[n-1]<=nums1[0])
        {
            if((n+m)%2==0)
            {
                return double(nums2[t]+nums2[t-1])/2;
            }
            else
            {
                return double(nums2[t]);
            }
        }
        */
        int s=0,e=m-1;
        while(s<=e)
        {
            int m1=(s+e)/2;
            int m2=t-m1-2;
            if(m2<0)
            {
                if((n+m)%2!=0)
               return nums1[m-1];
          else
        {
            int x=nums1[m-1]+nums2[0];
            return double(x)/2;
        }
        }
            int lx=nums1[m1],ly=nums2[m2];
            int rx=INT_MAX,ry=INT_MAX;
            if(m1<m-1)
                rx=nums1[m1+1];
            if(m2<n-1)
                ry=nums2[m2+1];
            if(lx<=ry&&ly<=rx)
            {
                if((n+m)%2!=0)
                return max(lx,ly);
                else
                {
                   return double(max(lx,ly)+min(rx,ry))/2;
                }
            }
            if(lx<ry)
                s=m1+1;
            else
                e=m1-1;
            
        }
        if((n+m)%2!=0)
            return nums2[t-1];
        else
        {
            int x=nums2[t-1];
            if(t==nums2.size()||(nums1[m-1]<nums2[t])||nums1[0]<nums2[t])
                x=x+nums1[0];
            else
                x=x+nums2[t];
            return double(x)/2;
        }
    }
};