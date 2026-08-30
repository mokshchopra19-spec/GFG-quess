class Solution:
    def countFreq(self, arr):
       freq={}
       for x in arr:
          freq[x] = freq.get(x, 0) + 1
       return [[key, value] for key, value in freq.items()]