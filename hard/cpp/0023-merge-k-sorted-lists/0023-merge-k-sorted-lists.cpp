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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;

        vector<int> v;

        for (int i = 0 ; i < lists.size() ; i++){
            while(lists[i]){
                v.push_back(lists[i]->val);
                lists[i] = lists[i]->next;
            }
        }
        sort(v.rbegin(), v.rend());
        ListNode * head = NULL;
        for (int i = 0 ; i < v.size() ; i++){
            head = new ListNode(v[i], head);
        }
        return head;
        
    }
};