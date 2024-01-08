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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL&&head->next==NULL)
            return head;
        
        ListNode* prev=head;
        ListNode* curr=head->next;

        while(curr!=NULL){

           int temp= gcd(prev->val,curr->val);
           ListNode* node=new ListNode(temp);
           prev->next=node;
           node->next=curr;
           prev=curr;
           curr=curr->next;
        }

        return head;
    }
};
