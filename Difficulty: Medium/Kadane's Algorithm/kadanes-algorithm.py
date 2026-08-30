import sys
class Solution:
    def maxSubarraySum(self, arr):
        currsum=0;
        maxsum = -sys.maxsize - 1;
                
        for i in arr:
           currsum +=i
           maxsum=max(currsum,maxsum)
           if currsum < 0:
            currsum=0
         
        return maxsum 
        