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
    
    bool isEqual(TreeNode* r, TreeNode* l){
        if(r == NULL && l == NULL)  return true;
        if(r == NULL || l == NULL) return false;
        if(r->val != l->val)return false;
        return isEqual(r->right, l->left) && isEqual(r->left, l->right);
        
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        //if(root->right->val != root->left->val) return false;
        return isEqual(root->right, root->left);
    }
};