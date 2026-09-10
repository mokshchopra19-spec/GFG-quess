class Solution:
    def countBitsFlip(self, a, b):
        #code here
        return (a^b).bit_count()