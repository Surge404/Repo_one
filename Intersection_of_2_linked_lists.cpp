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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=NULL;
        ListNode* t1 = headA;
        ListNode* t2 = headB;
        set<ListNode*> st;
        set<ListNode*>:: iterator itr;
        while(t1){
            st.insert(t1);
            t1=t1->next;
        }
        while(t2){
            itr = st.find(t2);
            if(t2==*itr){
                temp=t2;cout<<t2->val;break;
            }
            t2=t2->next;
        }
        
        return temp;
    }
};
