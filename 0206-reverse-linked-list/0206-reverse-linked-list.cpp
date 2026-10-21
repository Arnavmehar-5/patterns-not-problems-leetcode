
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        // Base case
        if (head == NULL || head->next == NULL)
            return head;

        // Reverse the remaining linked list
        ListNode* newHead = reverseList(head->next);

        // Reverse the current link
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};
