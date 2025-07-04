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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;
        if(root==NULL) return result;
        
        queue<TreeNode*>q;
        q.push(root);
        bool lefttoright=true;
        while(!q.empty())
        {
            int qsize=q.size();
            vector<int>level(qsize);
            for(int i=0;i<qsize;i++)
            {
                TreeNode* curr=q.front(); q.pop();
                int index=lefttoright?i:(qsize-i-1);
                level[index]=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
                
            }
            result.push_back(level);
            lefttoright=!lefttoright;
        }
        return result;
    }
};