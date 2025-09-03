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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> l1;
        int n = lists.size();
        for (int i =0; i<n; i++){
            ListNode* temp = lists[i];
            while(temp != NULL){
                l1.push_back(temp->val);
                temp = temp->next;
            }
        }
        sort(l1.begin(),l1.end());
        int n1 = l1.size();
        ListNode* ans = new ListNode(-1);
        ListNode* temp1= ans;
        for (int i=0; i<n1;i++){
            temp1->next = new ListNode(l1[i]);
            temp1= temp1->next;
        } 
        return ans->next;
    }
};