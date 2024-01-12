/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *h) {
        ListNode* s=h;
        ListNode* f=h;
        ListNode*ans=NULL;
        while(s && f && f->next){
            s=s->next;
            f=f->next->next;
            if(f==s){
                f=h;
                while(f!=s){
                    f=f->next;
                    s=s->next;
                }
                    ans=s;
                    break;
            }
        }
        return ans;
    }
};