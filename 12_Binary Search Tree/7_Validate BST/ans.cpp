// https://leetcode.com/problems/validate-binary-search-tree/submissions/968592113/
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
    bool solve(TreeNode* root,long long int LB,long long int UB){
        // base case
        if(root==NULL)
            return true;
        if(root->val > LB && root->val <UB ){
            bool leftAns=solve(root->left,LB,root->val);
            bool rightAns=solve(root->right,root->val,UB);
            return leftAns && rightAns;
        }
        else{
            return false;
        }
    }
    bool isValidBST(TreeNode* root) {
        long long int LowerBound=-4294967296;
        long long int UpperBound=4294967296;
        bool ans=solve(root,LowerBound,UpperBound);
        return ans;
    }
};