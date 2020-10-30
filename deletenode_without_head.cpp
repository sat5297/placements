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
    void deleteNode(ListNode* node) {
        ListNode* curr = node;
        ListNode* curr1 = node;
        curr1 = curr1->next;
        //cout << curr->val << " " << curr1->val <<endl;
        while(curr1 -> next != NULL)
        {
            curr->val = curr1->val;
            curr = curr->next;
            curr1 = curr1->next;
          //  cout << curr->val << " " << curr1->val <<endl;
        }
        curr->val = curr1->val;
        curr->next = NULL;
    }
};
