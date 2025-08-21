/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *deleteMiddle(ListNode *head)
    {
        if (head->next == nullptr)
        {
            return nullptr;
        }

        int n = 0;
        ListNode *current = head; // A temporary pointer to move through the list

        while (current != nullptr)
        {
            n++;
            current = current->next; // Move to the next node
        }

        int middle_idx = floor(n / 2);

        int m = 0;
        ListNode *prev = head; // A temporary pointer to move through the list

        while (m < middle_idx - 1)
        {
            m++;
            prev = prev->next;
        }

        ListNode *middle = prev->next;
        prev->next = middle->next;

        return head;
    }
};