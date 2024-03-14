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
     int Findposition(vector<int> in ,int inorderStart , int inorderEnd , int element ,int  n){
        for(int i = inorderStart ; i<=inorderEnd ;i++){
            if(in[i]==element){
                return i ; 
            }
        }
        return -1 ;
    }
    TreeNode* solve(vector<int> inorder,vector<int> preorder,int& index,int inorderStart,int inorderEnd,int n){
        if(index>=n||inorderStart>inorderEnd) return NULL;

        int element=preorder[index++];
        TreeNode* root=new TreeNode(element);
        int position= Findposition(inorder  , inorderStart , inorderEnd ,element, n);;
        
        root->left= solve(inorder,preorder,index,inorderStart,position-1,n);
        root->right= solve(inorder,preorder,index,position+1,inorderEnd,n);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex=0,n=inorder.size();
        TreeNode* root=solve(inorder,preorder,preOrderIndex,0,n-1,n);
        return root;
    }
};
