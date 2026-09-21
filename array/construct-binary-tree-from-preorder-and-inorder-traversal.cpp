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
int i=0;
TreeNode* build(vector<int>pre,vector<int>in,int start,int end){
    if(start>end){
        return nullptr;
    }
    TreeNode* root=new TreeNode(pre[i]);
    i++;
    for(int j=start;j<=end;j++){
        if(in[j]==root->val){
            root->left=build(pre,in,start,j-1);
            root->right=build(pre,in,j+1,end);
        }
    }
    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int start=0;
        int end=inorder.size()-1;
        return build(preorder,inorder,start,end);
    }
};