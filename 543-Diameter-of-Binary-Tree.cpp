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
    private:
    int maxDepth(TreeNode * root,int &maxe)
    {
        if(root==NULL)
        return 0;

        int lh=maxDepth(root->left,maxe);
        int rh=maxDepth(root->right,maxe);

        maxe=max(maxe,lh+rh);
        return 1+max(lh,rh);
    }

public:
    int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        int maxe=0;
        int ans=maxDepth(root,maxe);

        return maxe;
    }
};