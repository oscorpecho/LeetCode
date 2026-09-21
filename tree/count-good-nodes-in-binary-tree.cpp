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
    int count(TreeNode* root,int maxsofar){
        int c=0;
        if(root==nullptr){
            return 0;
        }
        if(root->val>=maxsofar){
            c++;
        }
        int newmax=max(root->val,maxsofar);
        int left=count(root->left,newmax);
        int right=count(root->right,newmax);
        c+=left+right;
        return c;
    }
    int goodNodes(TreeNode* root) {
        int maxsofar=root->val;
        return count(root,maxsofar);
    }
};