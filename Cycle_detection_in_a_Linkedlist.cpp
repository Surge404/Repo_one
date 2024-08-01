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
    bool hasCycle(ListNode *head) {
        set<ListNode*> done;
        ListNode* temp = head;
        while(temp!=NULL){
            if(done.find(temp) != done.end()){
                return true;
            }
            done.insert(temp);
            cout<<temp->val<<endl;
            temp = temp->next;
        }
        return false;
    }
};
