class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i=0
        j=0
        k=0
        while i<m and j<n:
            if nums2[j]<nums1[k]:
                nums1.pop()
                nums1.insert(k,nums2[j])
                j+=1
                k+=1
            
            else:
                i+=1
                k+=1
            print(nums1)  
            
        while j<n:
            nums1[k]=nums2[j]
            k+=1
            j+=1