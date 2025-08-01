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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL) return result;

        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int levelsize=q.size();
            vector<int>level;
            for(int i=0;i<levelsize;i++)
            {
                TreeNode* curr=q.front(); q.pop();
                level.push_back(curr->val);

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            result.push_back(level);
        }
        return result;
    }
};