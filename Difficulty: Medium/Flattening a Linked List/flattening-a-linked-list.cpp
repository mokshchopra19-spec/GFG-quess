/*
class Node {
	public:
	int data;
	Node* next;
	Node* bottom;
	
	Node(int x) {
		data = x;
		next = nullptr;
		bottom = nullptr;
	}
}; */
class Solution {
public:

    Node* merge(Node* down, Node* right) {
        if (down == NULL)
            return right;

        if (right == NULL)
            return down;

        Node* ans;

        if (down->data < right->data) {
            ans = down;
            ans->bottom = merge(down->bottom, right);
        }
        else {
            ans = right;
            ans->bottom = merge(down, right->bottom);
        }

        ans->next = NULL;

        return ans;
    }

    Node* flatten(Node* head) {

        if (head == NULL || head->next == NULL)
            return head;

        // Find middle of horizontal list
        Node* down = head;
        Node* right = head->next;

        while (right != NULL && right->next != NULL) {
            down = down->next;
            right = right->next->next;
        }

        // Split into two halves
        right = down->next;
        down->next = NULL;

        // Flatten both halves
        Node* left = flatten(head);
        right = flatten(right);

        // Merge both halves
        return merge(left, right);
    }
};