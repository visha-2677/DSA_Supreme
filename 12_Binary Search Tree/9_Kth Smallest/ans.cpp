// https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/968737968/
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
    int kthSmallest(TreeNode* root, int &k) {
        if(root==NULL){
            return -1;
        }
        // InOrder Traversal
        // left
        int leftAns=kthSmallest(root->left,k);
        if(leftAns!=-1){
            return leftAns;
        }
        // N->root
        k--;
        if(k==0){
            return root->val;
        }
        // right
        int rightAns=kthSmallest(root->right,k);
        return rightAns;
    }
};