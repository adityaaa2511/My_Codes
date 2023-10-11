class Solution {
 public:
  ListNode* detectCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
      if (slow == fast) {
        // If the pointers meet, there is a cycle in the linked list.
        // Reset the slow pointer to the head of the linked list, and move both pointers one step at a time
        // until they meet again. The node where they meet is the starting point of the cycle.
        slow = head;
        while (slow != fast) {
          slow = slow->next;
          fast = fast->next;
        }
        return slow;
      }
    }
    return nullptr;
  }
};