/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* invertTree(struct TreeNode* root){
    if(root != NULL){
        struct TreeNode *temp;
        
        invertTree(root->right);
        invertTree(root->left);
        
        temp = root->right;
        root->right = root->left;
        root->left = temp;
        
        return(root);
    }else{
        return;
    }
}