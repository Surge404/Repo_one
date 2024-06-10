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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        //Here we simply cannot write ListNode* dummy; because ListNode* dummy will declare a POINTER which is not pointing anywhere. Whereas ListNode dummy; will declare a new empty node called dummy. PS - With pointers, we use arrows like : dummy->next whereas with objects, we use dots to access the values and their functions like this dummy.next;
        ListNode dummy;
        ListNode* temp = &dummy;
        while(temp1&&temp2){
            if(temp1->val>temp2->val){
                temp->next = temp2;
                temp2=temp2->next;
            }
            else{
                temp->next = temp1;
                temp1=temp1->next;
            }
            temp = temp->next;
        }
        if(temp1){
            temp->next=temp1;
        }
        if(temp2){
            temp->next = temp2;
        }
        return dummy.next;
    }
};
