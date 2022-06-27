/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        unordered_map<ListNode *, int> mp;
        ListNode *curr = head;

        while (curr != NULL)
        {
            mp[curr]++;
            if (mp[curr] > 1)
            {
                break;
            }
            curr = curr->next;
        }
        return curr;
    }
};