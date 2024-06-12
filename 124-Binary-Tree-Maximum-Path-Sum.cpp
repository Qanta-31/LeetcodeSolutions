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
    int maxDepth(TreeNode* root,int &maxe)
    {
        if(root==NULL)
        return 0;

        int lsum=maxDepth(root->left,maxe);
        int rsum=maxDepth(root->right,maxe);

        maxe=max(maxe,lsum+rsum+(root->val));

        int s=root->val + max(lsum,rsum);
        if(s>0)
        return s;
        else 
        return 0;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxe=INT_MIN;
        maxDepth(root,maxe);

        return maxe;
    }
};