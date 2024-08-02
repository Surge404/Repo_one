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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr){
            return true;
        }
        ListNode*temp = head;
        int count = 0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        
        stack<int> st;
        for(int i = 0; i<count/2;i++){
           st.push(head->val); 
           head=head->next;
        }
        if(count%2!=0){st.push(head->val);}
        while(head!=nullptr){
            if(head->val!=st.top()){
                return false;
            }
            st.pop();
            head=head->next;
        }
        return true;
    }
};
