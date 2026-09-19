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
    void reorderList(ListNode* head) {
        vector<int> t;  // isme store karate jayenge pahele LL ko
        ListNode* temp = head;  // temp pointer banayenge
        while (temp != NULL) {
            t.push_back(temp->val);
            temp = temp->next;
        }
        int i = 0;
        int j = t.size() - 1;
        vector<int> ans;  // joh condn qsn meh bola hai woh karenge
        while (i < j) {
            ans.push_back(t[i]);
            ans.push_back(t[j]);
            i++;
            j--;
            if (i == j) {
                ans.push_back(t[i]);
                break;
            }
        }
        ListNode* dummy = head;   // phirse dummynode leke reinitialize kardenge
        for (int i = 0; i < ans.size(); i++) {
            dummy->val = ans[i];
            dummy = dummy->next;
        }
        return;
    }
};