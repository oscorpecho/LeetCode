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
    int height(TreeNode* root){
        if(root==nullptr){
            return -1;
        }
        int L=height(root->left);
        int R=height(root->right);
        int h=1+max(L,R);
        return h;
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr){
            return true;
        }
        int L=height(root->left);
        int R=height(root->right);
        if(abs(L-R)<=1&&isBalanced(root->left)&&isBalanced(root->right)){
            return true;
        }
        return false;
    }
};