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
        ListNode* temp=head;
        int a=0,mid;
     
        while(temp!=NULL){
            a++;
            temp=temp->next;
        }

        mid=a/2;
        mid++;

        for(int i=0;i<mid-1;i++){
            head=head->next;
        }

        return head;
    }
};
