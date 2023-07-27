// https://leetcode.com/problems/path-sum-ii/submissions/960870147/
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
    void solve(TreeNode* root,int targetSum,vector<vector<int>> &ans,vector<int> &path,int &CurrSum){
        if(root==NULL) return ;
        // Leaf Node
        if(root->left==NULL && root->right==NULL){
            // include in Node val
            path.push_back(root->val);
            CurrSum+=root->val;
            // check target is Sum
            if(CurrSum==targetSum){
                ans.push_back(path);
            }
            // exclude form path Node val
            path.pop_back();
            CurrSum-=root->val;
            return ;
        }
        // Include Current Node Val mean Other Nodes
        path.push_back(root->val);
        CurrSum +=root->val;

        // Find left Node subtree and right Node subtree 
        solve(root->left,targetSum,ans,path,CurrSum);
        solve(root->right,targetSum,ans,path,CurrSum);

        // Back Track to exclude Node val in path
        path.pop_back();
        CurrSum-=root->val;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        int sum=0;
        vector<int> temp;
        solve(root,targetSum,ans,temp,sum);
        return ans;
    }
};