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
    ListNode* reverseList(ListNode* head) {
        ListNode*prev = nullptr;
        ListNode* temp = head;
        ListNode* front;
        while(temp){
            front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;





/////////////////////////////////////////////////////////////////////////////////////////
        // stack<int> st;
        // ListNode* temp = head;
        // while(temp){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // while(temp){
        //     temp->val = st.top();
        //     st.pop();
        //     temp=temp->next;
        // }
        // return head;
    }
};
