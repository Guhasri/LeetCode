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
    int maxLevelSum(TreeNode* root) {
        int temp=-1e9;
        int level=0;
        int ans=0;

        queue<TreeNode*> queue;
        queue.push(root);
    while(!queue.empty()){
        int size=queue.size();
        long currentSum=0;
        level++;
        for(int i=0;i<size;i++){

            TreeNode* tempNode=queue.front();
            queue.pop();
            
            currentSum+=tempNode->val;

            if(tempNode->left!=NULL){
                queue.push(tempNode->left);
            }
            if(tempNode->right!=NULL){
                queue.push(tempNode->right);
            }

        }
        if(currentSum>temp){
            temp=currentSum;
            ans=level;
        }
    }
    return ans;
    }
    
};