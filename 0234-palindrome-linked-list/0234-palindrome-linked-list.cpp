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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        if(!head || !head->next) return true;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode *prev=NULL;
        while(slow)
        {
            ListNode *curr=slow->next;
            slow->next=prev;
            prev=slow;
            slow=curr;
        }
        ListNode *first=head;
        ListNode *second=prev;
        while(second)
        {
            if(first->val!=second->val)
            {
                return false;
            }
            first=first->next;
            second=second->next;
        }   
        return true;

    }
};