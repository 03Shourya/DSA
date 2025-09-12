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
private:
    int level(TreeNode* root)
    {
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
    void helper(TreeNode* root,int &maxDia)
    {
        if(root==NULL) return;
        int dia=level(root->left)+level(root->right);
        maxDia=max(maxDia,dia);
        helper(root->left,maxDia);
        helper(root->right,maxDia);

    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia=0;
        helper(root,maxDia);
        return maxDia;
    }
};