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
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr = head;
        stack<int> st;
        while (curr != NULL) {
            while (!st.empty() && curr->val > st.top()) {
                st.pop();  // poop karte jayenge jab tak upar wali
            }       // condition satisfy karega
            st.push(curr->val);  // nhi toh push karenge
            curr = curr->next;
        }
        ListNode* temp=NULL;  // new LL banayenege
        while(!st.empty()){   
            ListNode* node=new ListNode(st.top());
            st.pop();
            node->next=temp;
            temp=node;
        }
        return temp;
    }
};