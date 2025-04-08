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
    ListNode* arr2ll(vector<int>&a)
    {
        ListNode *head=new ListNode(a[0]);
        ListNode *current=head;
        for(int i=1;i<a.size();i++)
        {
            current->next=new ListNode(a[i]);
            current=current->next;
        }
        return head;
    }
    ListNode* sortList(ListNode* head) {
        if (!head || !head->next) return head;
        vector<int>a;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            a.push_back(temp->val);
            temp=temp->next;
        }
        sort(a.begin(),a.end());
        
        return arr2ll(a);

    }
};