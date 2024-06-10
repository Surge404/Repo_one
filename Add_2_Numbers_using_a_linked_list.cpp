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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
int a0 = l1->val+l2->val;
int s0 = a0%10;
int c0 = a0/10;

ListNode* head1 = new ListNode(s0);
ListNode* bloop = head1;
l1=l1->next;
l2=l2->next;
int c =0;
while(1!=2){
    int e,f;
    if(!l1){e=0;}
    else{e = l1->val;}
    
    if(!l2){f=0;}
    else{f = l2->val;}
    
    int a = e+f+c+c0;
    c0=0;
    int s = a%10;
    c = a/10;
    if(c!=0||s!=0){
        ListNode* pewpew = new ListNode(s);
        bloop->next = pewpew;
        bloop = pewpew;    

    }
    if((s==0&&c==0)&&(l1!=nullptr&&l2!=nullptr)){
        if(l1->next!=nullptr||l2->next!=nullptr){
        ListNode* pewpew = new ListNode(0);
        bloop->next = pewpew;
        bloop = pewpew;    
        }
    }
    else if((s==0&&c==0)&&(l1==nullptr&&l2!=nullptr)){
        if(l2->next!=nullptr){
        ListNode* pewpew = new ListNode(0);
        bloop->next = pewpew;
        bloop = pewpew;    
        }
    }
    else if((s==0&&c==0)&&(l1!=nullptr&&l2==nullptr)){
        if(l1->next!=nullptr){
        ListNode* pewpew = new ListNode(0);
        bloop->next = pewpew;
        bloop = pewpew;    
        }
    } 
        

 if((l2==nullptr||l2->next== nullptr)&l1!=nullptr){
    l2=nullptr;
l1=l1->next;
    continue;
}
else if((l1==nullptr||l1->next== nullptr)&l2!=nullptr){
    l2=l2->next;
    l1=nullptr;
    continue;}
else if(l1==nullptr&&l2==nullptr){
    break;
    }
else{
    l1=l1->next;
    l2=l2->next;
    }


//while loop's closing bracket below
}

   return head1; }
};
