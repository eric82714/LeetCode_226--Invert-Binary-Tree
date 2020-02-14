/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    if(!root) return NULL;
        
    struct TreeNode* tmp;
    tmp = root->right;
    root->right = root->left;
    root->left = tmp;
            
    invertTree(root->right);
    invertTree(root->left);
        
    return root;
}
