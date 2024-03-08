class Solution {
public:
    bool solve(TreeNode* root, int sum, int targetSum) {
        if (root == nullptr) return false;

        sum += root->val;

        if (root->left == nullptr && root->right == nullptr) {
            return sum == targetSum;
        }

        // Recursively check the left and right subtrees
        return solve(root->left, sum, targetSum) || solve(root->right, sum, targetSum);
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        // Start recursion from the root with initial sum as 0
        return solve(root, 0, targetSum);
    }
};
