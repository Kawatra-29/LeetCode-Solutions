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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr)
            return nullptr;
        else if (head->next == nullptr)
            return head;
        ListNode* p = reverseList(head->next);
        ListNode* prev = head->next;
        prev->next = head;
        head->next = nullptr;
        return p;
    }
};