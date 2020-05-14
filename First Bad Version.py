# The isBadVersion API is already defined for you.
# @param version, an integer
# @return a bool
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        fi=1
        mid=(fi+n)//2
        while mid>=1:
            mid=(fi+n)//2
            f=isBadVersion(mid)
            try:
                if f==True and isBadVersion(mid-1)==False:
                    return mid
                elif f==True:
                    n=mid-1
                else:
                    fi=mid+1
            except:
                if f==True:
                    return mid
                
        """
        :type n: int
        :rtype: int
        """
        