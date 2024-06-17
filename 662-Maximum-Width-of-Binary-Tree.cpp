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
    int widthOfBinaryTree(TreeNode* root) {

        if(!root)
        return 0;
        int ans=0;
        queue<pair<TreeNode*,long long >>q;
        q.push({root,0});

        while(!q.empty())
        {
            int min=q.front().second;
            int size=q.size();
            int first,last;
            for(int i=0;i<size;i++)
            {
                int curidx=q.front().second-min;
                TreeNode* root=q.front().first;
                q.pop();

                if(i==0)
                first=curidx;
                if(i==size-1)
                last=curidx;

                if(root->left)
                q.push({root->left,(long long)curidx*2+1});
                if(root->right)
                q.push({root->right,(long long)curidx*2+2});                
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};