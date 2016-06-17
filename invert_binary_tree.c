/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode *node;
    
    if (NULL != root) {
        node = root->left;
        root->left = root->right;
        root->right = node;
    }
    else {
        return NULL;
    }
    
    invertTree(root->left);
    invertTree(root->right);
    
    return root;
}
