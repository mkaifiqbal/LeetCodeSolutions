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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp= head;
        if(head==nullptr) return nullptr;
        while(head !=nullptr && head->next!=nullptr ){
            swap(head->val,head->next->val);
            head= head->next->next;
        }
        return temp;
    }
};