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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
         if (depth == 1) {
        TreeNode* new_root = new TreeNode(val);
        new_root->left = root;
        return new_root;
    }

    std::queue<std::pair<TreeNode*, int>> q;
    q.push({root, 1});

    while (!q.empty()) {
        auto [node, current_depth] = q.front();
        q.pop();

        if (current_depth == depth - 1) {
            TreeNode* left_node = new TreeNode(val);
            left_node->left = node->left;
            node->left = left_node;

            TreeNode* right_node = new TreeNode(val);
            right_node->right = node->right;
            node->right = right_node;
        } else {
            if (node->left) {
                q.push({node->left, current_depth + 1});
            }
            if (node->right) {
                q.push({node->right, current_depth + 1});
            }
        }
    }

    return root;
    }
};