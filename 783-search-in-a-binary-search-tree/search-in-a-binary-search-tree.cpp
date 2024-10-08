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
    TreeNode* traversal(TreeNode* root, int val) {
        if (root == NULL) {
            return NULL;
        }

        if (root->val == val) {
            return root;
        }

        
        TreeNode* leftSearch = traversal(root->left, val);
        if (leftSearch != NULL) {
            return leftSearch;
        }

        
        TreeNode* rightSearch = traversal(root->right, val);
        return rightSearch;
    }
    
    TreeNode* searchBST(TreeNode* root, int val) {
        return traversal(root, val);
    }
};
