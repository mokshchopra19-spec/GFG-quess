class Solution:
    def trailingZeroes(self, n):
      ans = 0
      while n > 0:
          n = n // 5
          ans += n

      return ans
    	