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
        // if(!head || !head->next) return NULL;
        // ListNode *temp=head;
        // int x=1;
        // while(temp->next!=NULL)
        // {
        //     x++;
        //     temp=temp->next;
        // }
        // if(n==x) return head->next;
        // int y=x-n;
        // temp=head;
        // x=1;
        // while(temp && temp->next)
        // {
        //     if(x==y)
        //     {
        //         temp->next=temp->next->next;
        //     }
        //     x++;
        //     temp=temp->next;
        // }
        // return head;

        ListNode *dummy=new ListNode(0,head);
        ListNode *slow=dummy;
        ListNode *fast=dummy;

        for(int i=0;i<=n;i++)
        {
            fast=fast->next;
        }
        while(fast)
        {
            slow=slow->next;
            fast=fast->next;
            
        }
        slow->next=slow->next->next;

        return dummy->next;

    }
};