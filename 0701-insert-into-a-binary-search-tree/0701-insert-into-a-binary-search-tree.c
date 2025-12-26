/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* createLeaf(int val){
    struct TreeNode* newLeaf=(struct TreeNode*) malloc(sizeof(struct TreeNode));
    newLeaf->val=val;
    newLeaf->right=NULL;
    newLeaf->left=NULL;
    return newLeaf;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if(root==NULL) return createLeaf(val);

    if(root->val>val){
        root->left=insertIntoBST(root->left, val);
    }

    else{
        root->right=insertIntoBST(root->right, val);
    }
    return root;
}