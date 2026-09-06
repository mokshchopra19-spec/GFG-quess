class Solution:
    def minCost(self, arr):
        # code here
        pq = []
        ans = 0
        for num in arr:
            heapq.heappush(pq,num)
        
        while len(pq) > 1:
            sum = 0
            sum += heapq.heappop(pq)
            if pq:
                sum += heapq.heappop(pq)
            ans += sum
            heapq.heappush(pq,sum)
        return ans    