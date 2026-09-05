import heapq
class Solution:
    def mergeArrays(self, mat):
        # code here
        pq=[]
        for i in range (len(mat)):
            for y in mat[i]:
                heapq.heappush(pq,y)
         
        return sorted(pq)