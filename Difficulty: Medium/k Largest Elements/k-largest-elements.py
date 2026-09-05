import heapq

class Solution:
    def kLargest(self, arr, k):
        pq = []

        for num in arr:
            heapq.heappush(pq, num)

            if len(pq) > k:
                heapq.heappop(pq)

        return sorted(pq, reverse=True)