class Solution:
    def longestSubarray(self, arr, k):
        mp = {}
        prefix = 0
        ans = 0
    
        for i in range(len(arr)):
            prefix += arr[i]
    
            if prefix == k:
                ans = i + 1
    
            need = prefix - k
    
            if need in mp:
                ans = max(ans, i - mp[need])
    
            # First occurrence only store karo
            if prefix not in mp:
                mp[prefix] = i
    
        return ans