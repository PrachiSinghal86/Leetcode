/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int s=1,m,a,b,c;
        int n=mountainArr.length()-1;
        int e=n-1;
        while(s<=e)
            {
            m=(s+e)/2;
           
         a=mountainArr.get(m);
            
             b=mountainArr.get(m-1);
             c=mountainArr.get(m+1);
            if(a>b&&a>c)
                {
                break;
            }
            else if(a>c)
                e=m-1;
            else
                s=m+1;
        }
    
        s=0;
        if(a==target)
            return m;
        else if(a<target)
            return -1;
        e=m-1;
        int mn;
        while(s<=e)
            {
            mn=(s+e)/2;
            a=mountainArr.get(mn);
            if(a==target)
                return mn;
            else if(a<target)
                s=mn+1;
            else
                e=mn-1;
        }
        s=m+1;
        e=n;
        while(s<=e)
            {
            mn=(s+e)/2;
                a=mountainArr.get(mn);
            if(a==target)
                return mn;
            else if(a>target)
                s=mn+1;
            else
                e=mn-1;
        }
        return -1;
        
    }
};