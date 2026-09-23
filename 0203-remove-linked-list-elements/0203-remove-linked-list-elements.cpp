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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* ans = removeElem(head,val);
        if(ans!=nullptr && ans->val==val){
            ans = ans->next;
        }
        return ans;
    }
     ListNode* removeElem(ListNode* head, int val) {
        if (head == nullptr)
            return nullptr;
        else if (head->next == nullptr)
            return head;
        ListNode* nxt = removeElem(head->next, val);
        if (nxt->val == val) {
            head->next = nxt->next;
        }
        return head ;
    }
};