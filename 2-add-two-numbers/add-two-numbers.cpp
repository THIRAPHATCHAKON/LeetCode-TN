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
        ListNode* result = new ListNode;
        ListNode* current = result;
        ListNode* next = current->next;
        int crray = 0;
        int digital = 0;
        while (l1 != nullptr || l2 != nullptr || crray != 0){
            int val1 = 0;
            int val2 = 0;

            if (l1 != nullptr) {
                val1 = l1->val;
            }

            if (l2 != nullptr) {
                val2 = l2->val;
            }
            int sum = val1 + val2 + crray;
            if (sum >= 10) {
                digital =  sum % 10;
                crray = sum /= 10;
                current->val = digital;
            }else{
                digital =  sum % 10;
                current->val = digital;
                crray = 0;
            }
            if (l1 != nullptr) {
                l1 = l1->next;
            }

            if (l2 != nullptr) {
                l2 = l2->next;
            }
            if(!(l1 != nullptr || l2 != nullptr || crray != 0)) break;
            current->next = new ListNode;
            current = current->next;
        };
        return result;
    }
};