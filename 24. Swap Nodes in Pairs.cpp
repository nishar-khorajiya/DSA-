class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
     
        if(head==NULL||head->next==NULL){
            return head;
        }
        else{
      
        ListNode* p=head;
        ListNode* q=head->next;
                
        while(true){
            swap(p->val,q->val);
            if(!(q->next&&q->next->next)) break;
            p=q->next;
            q=q->next->next;
        }
        }
        return head;
    }
};
