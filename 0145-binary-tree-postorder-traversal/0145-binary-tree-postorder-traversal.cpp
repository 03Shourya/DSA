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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        preorder(root,result);
        return result;
    }
private:
    void preorder(TreeNode* root,vector<int>&result)
    {
        if(root==NULL) return;
        preorder(root->left,result);
        preorder(root->right,result);
        
        result.push_back(root->val);
    }
};