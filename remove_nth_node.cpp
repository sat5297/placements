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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* prev = head;
        
        for(int i = 0; i < n; i++)
        {
            if(curr->next == NULL)
            {
                if(i == (n-1))
                    head = head->next;
                return head;
            }
            curr = curr->next;
        }
                
        while(curr != NULL && curr->next != NULL)
        {
            curr = curr->next;
            prev = prev->next;
        }
        
        curr = prev->next;
        prev->next = curr->next;
        
        return head;
    }
};
