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
    void inOrder(TreeNode* root,vector<int>& x){
        
        if(root == NULL){
            return ;
        }

        inOrder(root->left,x);

         if( root->left == NULL && root->right == NULL){
            x.push_back(root->val);
        }
        
        inOrder(root->right,x);
        
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {

        vector<int> tree1,tree2;

        inOrder(root1,tree1);
        inOrder(root2,tree2);

        return tree1==tree2;
        
    }
};