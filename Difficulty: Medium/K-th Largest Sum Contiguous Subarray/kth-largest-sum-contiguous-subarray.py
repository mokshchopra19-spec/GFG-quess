from typing import List
import heapq
class Solution:
    def kthLargest(self, arr, k) -> int:
        pq=[]
        for i in range (len(arr)):
            sum = 0
            for j in range(i,len(arr),1):
                sum+=arr[j]
                heapq.heappush(pq,sum)
                if len(pq)>k:
                    heapq.heappop(pq)
            
        return pq[0]
