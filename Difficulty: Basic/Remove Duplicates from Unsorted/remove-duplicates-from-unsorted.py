class Solution:
    def removeDuplicate(self, arr):
       return list(dict.fromkeys(arr))

