class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        mn=1000000
        mx=0
        l=len(prices)
        for i in range(l):
            if prices[i]<mn:
                mn=prices[i]
            elif mx<prices[i]-mn:
                mx=prices[i]-mn
        return mx
        