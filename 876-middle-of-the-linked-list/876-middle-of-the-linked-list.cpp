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
    ListNode* middleNode(ListNode* head) {
        ListNode* fp = head;
        ListNode* sp = head;
        while( sp != NULL && sp->next != NULL)
        {
            fp = fp->next;
            sp = sp->next->next;
        }
        return fp;
    }
};