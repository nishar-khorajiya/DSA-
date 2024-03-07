class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL) return true;
        if(p==NULL&&q!=NULL||p!=NULL&&q==NULL) return false;

        bool leftans=isSameTree(p->left,q->left);
        bool rightans=isSameTree(p->right,q->right);

        bool ans=p->val==q->val;

        if(leftans&&rightans&&ans) return true;
        else return false;
        
    }
};
