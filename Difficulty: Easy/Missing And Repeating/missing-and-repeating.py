class Solution:
    def findTwoElement(self, arr):
       ans = [0, 0]
       freq = set()
       for x in arr:
           if x in freq:
               ans[0] = x;
           freq.add(x)

       y = int(sum(arr) - ans[0])
       n = len(arr)
       ans[1] = int((int(n * (n + 1)) / 2) - y)
       return ans
