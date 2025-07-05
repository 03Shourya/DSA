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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         map<int, map<int, multiset<int>>> nodes;
        queue<tuple<TreeNode*, int, int>> q; // node, x, y
        q.push({root, 0, 0});

        while (!q.empty()) {
            auto [node, x, y] = q.front(); q.pop();
            nodes[x][y].insert(node->val);
            if (node->left) q.push({node->left, x - 1, y + 1});
            if (node->right) q.push({node->right, x + 1, y + 1});
        }

        vector<vector<int>> result;
        for (auto& xPair : nodes) {
            vector<int> col;
            for (auto& yPair : xPair.second) {
                col.insert(col.end(), yPair.second.begin(), yPair.second.end());
            }
            result.push_back(col);
        }
        return result;
    }
};