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
    int height(TreeNode* root,int &maxdiameter){
        if(root==nullptr){
            return 0;
        }
        int left=height(root->left,maxdiameter);
        int right=height(root->right,maxdiameter);
        int h= 1+max(left,right);
        int diameter=left+right;
        maxdiameter=max(maxdiameter,diameter);
        return h;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxdiameter=0;
        height(root,maxdiameter);
        return maxdiameter;
    }
};