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
        ListNode* cur = new ListNode();
        ListNode* res = cur;
        std::vector<int> all;
        for (auto & l : lists) {
            while (l) {
                all.push_back(l->val);
                l = l->next;
            }
        }
        std::sort(all.begin(), all.end());
        for (auto & el : all) {
            cur->next = new ListNode(el);
            cur = cur->next;
        }
        return res->next;
    }
};