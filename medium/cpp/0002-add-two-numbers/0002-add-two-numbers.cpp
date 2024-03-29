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
        int c = 0;
        ListNode *dummy = new ListNode();
        ListNode *l3;
        l3 = dummy;

        while(l1 != NULL || l2 != NULL || c){
            int x = 0;
            if(l1 != NULL){
                x += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                x += l2->val;
                l2 = l2->next;
            }

            x += c;
            c = x/10;
            ListNode * newNode = new ListNode(x%10);
            l3->next = newNode;
            l3 = l3->next;

        }
        return dummy->next;
    }
};