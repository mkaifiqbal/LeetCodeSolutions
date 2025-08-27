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
        ListNode* l3 = new ListNode(-1);
        ListNode* temp = l3;
        int carry =0;
        while (l1 != NULL || l2 !=NULL || carry !=0){
            int add=0;
            if(l1) add += l1->val;
            if(l2) add += l2->val; 
            add += carry;
            carry = add/10;
            temp->next=new ListNode(add%10);
            temp = temp->next;
            if(l1) l1 = l1->next;
            if(l2) l2= l2->next;

        }
        return l3->next;
    }
};