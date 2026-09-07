/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
 void solve(vector<Node*>& arr, Node*& ans)
 {
     bool done = true;

     for (int i = 0; i < arr.size(); i++) {
         if (arr[i] != nullptr) {
             done = false;
             break;
         }
     }

     if (done)
         return;

     Node* mini = nullptr;
     int minIndex = -1;

     // Minimum node find karo
     for (int i = 0; i < arr.size(); i++)
     {
         if (arr[i] != nullptr &&
             (mini == nullptr || arr[i]->data < mini->data))
         {
             mini = arr[i];
             minIndex = i;
         }
     }

     // Minimum node ko answer mein attach karo
     ans->next = mini;
     ans = ans->next;

     // Us list ka pointer next node par le jao
     arr[minIndex] = arr[minIndex]->next;

     solve(arr, ans);
 }

 Node* mergeKLists(vector<Node*>& arr)
 {
     Node* ans = new Node(-1);
     Node* head = ans;

     solve(arr, ans);

     return head->next;
 }};