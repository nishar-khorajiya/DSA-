
class Solution {
public:

    pair<bool,int> isBalancedFast(TreeNode* root){

        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }

        pair<bool,int> left=isBalancedFast(root->left);
        pair<bool,int> right=isBalancedFast(root->right);

        bool leftans=left.first;
        bool rightans=right.first;

        bool diff=abs(left.second-right.second)<=1;

        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;

        if(leftans&&rightans&&diff){
            ans.first=true;
        }
        else{
            ans.first=false;
        }

        return ans;
    }

    bool isBalanced(TreeNode* root) {
        return isBalancedFast(root).first;
    }
};
