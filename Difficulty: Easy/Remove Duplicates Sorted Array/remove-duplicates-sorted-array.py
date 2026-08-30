class Solution:
    def removeDuplicates(self, arr):
        # code here 
        st=set(arr)
        return sorted(list(st))