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
            delete head;
            return nullptr;
        }

        // Step 2: Count the nodes (Pass 1)
        ListNode *fast = head; // A temporary pointer to move through the list
        ListNode *slow = head; // A temporary pointer to move through the list
        ListNode *prev = head; // A temporary pointer to move through the list

        while (fast != nullptr && fast->next != nullptr)
        {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next; // Move to the next node
        }

        ListNode *middle = prev->next;
        prev->next = middle->next;

        return head;
    }
};