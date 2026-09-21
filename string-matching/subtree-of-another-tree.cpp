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
bool identical(TreeNode* root, TreeNode* subroot){
    if(root==nullptr&&subroot==nullptr){
        return true;
    }
    if(root!=nullptr&&subroot!=nullptr){
        if((root->val==subroot->val)&&identical(root->left,subroot->left)&&identical(root->right,subroot->right)){
            return true;
        }
    }
    return false;
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr){
            return true;
        }
        if(root==nullptr){
            return false;
        }
        if(identical(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};