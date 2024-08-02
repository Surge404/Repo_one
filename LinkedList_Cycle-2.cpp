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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL||head->next==NULL){
            return NULL;
        }
        set<ListNode*> done;
        while(head!=NULL){
            if(done.find(head)!=done.end()){
                return head;
            }
            done.insert(head);
            head=head->next;
        }
     return NULL;   
    }
};
