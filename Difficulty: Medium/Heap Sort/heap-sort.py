class Solution:
    def heapSort(self, arr):
        n = len(arr)

        def heapify(i, size):
            while True:
                largest = i
                left = 2 * i + 1
                right = 2 * i + 2

                if left < size and arr[left] > arr[largest]:
                    largest = left

                if right < size and arr[right] > arr[largest]:
                    largest = right

                if largest == i:
                    break

                arr[i], arr[largest] = arr[largest], arr[i]
                i = largest

        # Max Heap banao
        for i in range(n // 2 - 1, -1, -1):
            heapify(i, n)

        # Largest ko end mein bhejte jao
        for i in range(n - 1, 0, -1):
            arr[0], arr[i] = arr[i], arr[0]
            heapify(0, i)

        return arr
        
        
        