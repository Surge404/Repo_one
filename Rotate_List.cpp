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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr){return head;}

        int count = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        ListNode* curr = head;
        if(k>count){k=k%count;}
        for(int i = 1;i<=k;i++){
            temp = curr;
            for(int j = 0;j<count-2;j++){
                temp = temp->next;
            }
            ListNode* t2 = temp->next;
            temp->next = nullptr;
            t2->next = curr;
            curr = t2;
        }
        return curr;
    }
};
