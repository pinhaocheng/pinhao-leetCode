/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        // Step 1: Handle edge cases
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }

        // Step 2: Initialize pointers
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_head = even;

        // Step 3: Separate the lists
        while (even != nullptr && even->next != nullptr)
        {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }

        // Step 4: Final connection
        odd->next = even_head;

        // Step 5: Return the original head
        return head;
    }
};