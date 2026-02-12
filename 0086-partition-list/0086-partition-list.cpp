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
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0);
        ListNode* large = new ListNode(0);
        ListNode* ans = small;
        ListNode* add= large;

        while(head != NULL){
            if(head->val<x){
                small->next = head;
                small = head;
            }else{
                large->next = head;
                large = head;
            }
            head= head->next;
        }
        large->next = NULL;
        small->next = add->next;

        return ans->next;

        
    }
};