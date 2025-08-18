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
int diameter=0;
    int dianode(TreeNode* root){
        if(root==NULL)return 0;

        int lh=dianode(root->left);
        int rh=dianode(root->right);

        diameter=max(diameter,lh+rh);

        return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dianode(root);
        return diameter;
    }
};