// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* temp = head;
//         int count = 1;
//         while(temp!=nullptr){
//             temp=temp->next;
//             count++;
//         }
//         int p = count-n+1;
//         ListNode* temp1 = head;
//         for(int i = 1;i<p;i++){
//             temp1=temp1->next;

//         }
//         ListNode* temp2;


//         if(!temp1){
//             return nullptr;
//         }
//         if(temp1->next!=nullptr){
//             temp2=temp1->next->next;
//         }
        
        
//         temp1->next=temp2;
//         return head;
//     }
// };









































































class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        int p = count-n+1;
        cout<<"The value of p is "<<p<<endl<<"The value of count is "<<count;
        ListNode* temp1 = head;
        for(int i = 1;i<p-1;i++){
            temp1=temp1->next;
        }
        ListNode* temp2;


        if(p==1||temp1==nullptr){
            return head->next;
        }
        else if(!temp1->next){
            head->next = nullptr;
            return head;
        }
        else {
            temp2=temp1->next->next;
            temp1->next=temp2;
            return head;}
    }
};
