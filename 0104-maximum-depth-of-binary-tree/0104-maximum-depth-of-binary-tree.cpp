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
    int maxDepth(TreeNode* root) {
        // if(root==NULL) return NULL;
        // int depth=0;
        // queue<TreeNode*>q;
        // q.push(root);

        // while(!q.empty())
        // {
        //     int qsize=q.size();
        //     depth++;
        //     for(int i=0;i<qsize;i++)
        //     {
        //         TreeNode* node=q.front(); q.pop();
        //         if(node->left) q.push(node->left);
        //         if(node->right) q.push(node->right);
        //     }
        // }
        // return depth;
        if(root==NULL) return NULL;
        return 1+max(maxDepth(root->left),maxDepth(root->right));
    }
};