class Solution:
	def pushZerosToEnd(self, arr):
        low = 0
        high = low + 1
    	while high<len(arr):
    	    if arr[high] != 0 and arr[low] == 0:
    	       arr[low], arr[high] = arr[high], arr[low]
    	       low += 1
    	    elif arr[low] != 0:
    	         low += 1
    	    high += 1
        return arr
