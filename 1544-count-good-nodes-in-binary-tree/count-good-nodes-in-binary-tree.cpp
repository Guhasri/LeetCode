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

    void traversal(TreeNode* root,int val,int& count){

        if(root==NULL){
            return;
        }
        if ( val <= root->val){
            count++;
            val=root->val;
        }
        
        traversal(root->left,val,count);
        traversal(root->right,val,count);
    }

    int goodNodes(TreeNode* root) {

    int count=0;   
    int val; 
    if ( root->left == NULL && root->right == NULL ){
        return 1;
    }
    traversal(root,root->val,count);
    return count;
    }
};