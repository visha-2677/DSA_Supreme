// https://leetcode.com/problems/balanced-binary-tree/submissions/960695718/
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
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        int ans=1+max(leftHeight,rightHeight);
        return ans;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        int diff=abs(leftheight-rightheight);

        bool ans1=(diff<=1);

        bool leftAns=isBalanced(root->left);
        bool rightAns=isBalanced(root->right);

        if(ans1 && leftAns && rightAns){
            return true;
        }
        else{
            return false;
        }
    }
};