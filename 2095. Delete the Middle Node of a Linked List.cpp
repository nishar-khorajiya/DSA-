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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=head;
        int count=0;

        

        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        if(count/2==0){
            delete head;
            return nullptr;
        }

        temp=head;

        for(int i=0;i<count/2;i++){       
            temp=curr;
            curr=curr->next;
        }

        temp->next=curr->next;
        curr->next =NULL;

        return head;
    }
};
