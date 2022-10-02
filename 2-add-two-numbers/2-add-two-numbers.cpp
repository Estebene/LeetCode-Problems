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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        int carry = 0;
        while (c1->next && c2->next) {
            int num = c1->val + c2->val + carry;
            carry = num / 10;
            c1->val = num % 10;
            c1 = c1->next;
            c2 = c2->next;
        }
        int num = c1->val + c2->val + carry;
        c1->val = num % 10;
        carry = num / 10;
        if (!c1->next) { 
            c1->next = c2->next;
        }
        while (c1->next && carry) {
            num = c1->next->val + carry;
            carry = num / 10;
            c1->next->val = num % 10;
            c1 = c1->next;
        }
        if (carry) {
            c1->next = new ListNode(1);
        }
        return l1;
        
    }
};