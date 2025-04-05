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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        int middle=c/2;
        int x=0;
        temp=head;
        while(x<middle)
        {
            temp=temp->next;
            x++;
        }
        return temp;
        
    }
};