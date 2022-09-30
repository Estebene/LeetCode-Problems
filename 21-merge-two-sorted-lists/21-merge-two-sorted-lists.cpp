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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head = new ListNode();
        ListNode *c1 = head;
        c1->next = list1;
        while (c1->next && list2) {
            if (list2->val <= c1->next->val) {
                ListNode *t1 = list2;
                list2 = list2->next;
                t1->next = c1->next;
                c1->next = t1;
            }
            c1 = c1->next;
        }
        if (list2) {
            c1->next = list2;
        }
        return head->next;
    }
};