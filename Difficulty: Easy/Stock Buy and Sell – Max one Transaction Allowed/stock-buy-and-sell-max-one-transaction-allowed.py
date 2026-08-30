class Solution:
    def maxProfit(self, prices):
        minprice=max(prices)
        maxprofit=0
        for i in prices:
         minprice= min(minprice,i)
         maxprofit=max(maxprofit,i-minprice)
        return maxprofit     
        