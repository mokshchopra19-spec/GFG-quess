from collections import deque

class Solution:
    def isHeap(self, root):
        if root is None:
            return True

        queue = deque([root])
        gapFound = False

        while queue:
            node = queue.popleft()

            if node.left:
                if node.data < node.left.data:
                    return False
                if gapFound:
                    return False
                queue.append(node.left)
            else:
                gapFound = True

            if node.right:
                if node.data < node.right.data:
                    return False
                if gapFound:
                    return False
                queue.append(node.right)
            else:
                gapFound = True

        return True
        