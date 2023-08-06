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
    int getDecimalValue(ListNode* head) {
        if(head==NULL){
            return 0;
        }
        vector<int> binary;
        int num=0;

        while(head!=NULL){
            binary.push_back(head->val);
            head=head->next;
        }

        reverse(binary.begin(),binary.end());
        for(int i=0;i<binary.size();i++){
            if(binary[i]==1){
                num=num+pow(2,i);
            }
        }
        return num;
    }
};
