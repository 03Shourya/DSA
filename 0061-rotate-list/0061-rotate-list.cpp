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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int count=1;
        if(head==NULL) return NULL;
        while(temp->next!=NULL)
        {
            count++;
            temp=temp->next;
        }
        k=k%count;
        if(k==0) return head;

        ListNode* curr=head;
        temp->next=head;
        int a=count-k;
        while(--a>0)
        {
            curr=curr->next;
        } 
        ListNode* newHead=curr->next;
        curr->next=NULL;


        return newHead; 
    }
};