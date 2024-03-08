/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* n1, TreeNode* n2) {
              //base case
        if(root == NULL)
        {
            return NULL;
        }
        
        if(root->val == n1->val || root->val == n2->val) 
        {
            return root;
        }
        
        TreeNode* leftAns = lowestCommonAncestor(root->left, n1, n2);
        TreeNode* rightAns = lowestCommonAncestor(root->right, n1, n2);
        
        if(leftAns != NULL && rightAns != NULL) 
        {
            return root;
        }
        else if(leftAns != NULL && rightAns == NULL)
            return leftAns;
        else if(leftAns == NULL && rightAns != NULL)
            return rightAns;
        else
            return NULL;
    }
};
