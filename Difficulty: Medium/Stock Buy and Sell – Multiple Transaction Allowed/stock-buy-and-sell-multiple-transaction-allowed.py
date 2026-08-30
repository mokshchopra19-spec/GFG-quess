class Solution:
    def maxProfit(self, prices):
     profit = 0
     buy = prices[0]

     for i in range(1, len(prices)):
       if prices[i] < prices[i - 1]:   
         profit += prices[i - 1] - buy
         buy = prices[i]


     profit += prices[-1] - buy
     return profit