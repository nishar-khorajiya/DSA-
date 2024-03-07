/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    pair<bool, int> isSumTreeFast(TreeNode* root) {
        if (root == NULL) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        if (root->left == NULL & root->right == NULL) {
            pair<bool, int> p = make_pair(true, root->val);
            return p;
        }

        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);

        bool isLeftSumTree = leftAns.first;
        bool isRightSumTree = rightAns.first;

        int leftSum = leftAns.second;
        int rightSum = rightAns.second;

        bool cond=root->val==leftSum+rightSum;
          pair<bool, int> ans;
        
        if(isLeftSumTree && isRightSumTree && cond) {
            ans.first = true;
            ans.second = root->val + leftSum + rightSum ;
        }
        else
        {
            ans.first = false;
        }

        return ans;
    }

    bool checkTree(TreeNode* root) { 
        return isSumTreeFast(root).first; 
        }
};
