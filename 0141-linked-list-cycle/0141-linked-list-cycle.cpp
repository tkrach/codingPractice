/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL || head->next == NULL) {
            return false;
        }
      // Fast and slow pointer solution here
      ListNode *fast = head->next;
      ListNode *slow = head;
      // If fast catches up to slow, there is a cycle
      while (slow != fast) {
        if (fast == NULL || fast->next == NULL) {
            return false;
        }

        slow = slow->next;
        fast = fast->next->next;
      }
      return true;
    }
};