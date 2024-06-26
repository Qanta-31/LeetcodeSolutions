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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        int k=0;
        while(!q.empty())
        {
            int size=q.size();
            vector<int>level(size);
            for(int i=0;i<size;i++)
            {
                auto it=q.front();
                q.pop();

                
                    if(it->left!=NULL)
                    q.push(it->left);
                    if(it->right!=NULL)
                    q.push(it->right);

                    if(k&1)
                    {
                        int idx=size-1-i;
                        level[idx]=it->val;
                    }
                    else
                    level[i]=it->val;
            }
            ans.push_back(level);
            k++;
        }

        return ans;
    }
};