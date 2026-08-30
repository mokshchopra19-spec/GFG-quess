from collections import Counter

class Solution:
    def countFreq(self, arr):
        freq = Counter(arr)
        return [[key, value] for key, value in freq.items()]