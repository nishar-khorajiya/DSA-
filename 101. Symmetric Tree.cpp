/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool helper(TreeNode* r1, TreeNode* r2){
        if(r1 == NULL and r2 != NULL or r1 != NULL and r2 == NULL){
            return false;
        }

        if(r1 == NULL and r2 == NULL){
            return true;
        }

        if(r1->val == r2->val){
            return helper(r1->left, r2->right) and helper(r1->right, r2->left);
        }

        return false;
    }

    bool isSymmetric(TreeNode* root) {
        
        TreeNode* root_left = root->left;
        TreeNode* root_right = root->right;
        return helper(root_left, root_right);
    }
};
