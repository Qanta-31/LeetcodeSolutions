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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>m;
        queue<pair<TreeNode*,pair<int,int>>>q;

        q.push({root,{0,0}});

        while(!q.empty())
        {
                auto it=q.front();
                q.pop();

                root=it.first;
                int x=it.second.first;
                int y=it.second.second;

                m[x][y].insert(root->val);

                if(root->left!=NULL)
                {
                    q.push({root->left,{x-1,y+1}});
                }
                if(root->right!=NULL)
                {
                    q.push({root->right,{x+1,y+1}});
                }
            }

            vector<vector<int>>ans;
        for(auto &it : m)
        {
            vector<int>level;
            for(auto &k : it.second)
            {
                level.insert(level.end(),k.second.begin(),k.second.end());
            }
            ans.push_back(level);
        }
        return ans;

        }
};