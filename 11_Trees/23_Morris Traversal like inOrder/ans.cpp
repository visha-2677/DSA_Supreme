// https://leetcode.com/problems/binary-tree-inorder-traversal/submissions/967064494/
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr=root;

        while(curr){
            // left node is null, then visit it and go right
            if(curr->left==nullptr){
                ans.push_back(curr->val);
                // establish path
                curr=curr->right;
            }
            // left node is Not Null
            else{
                // find inOrder Predecessor
                TreeNode* pred=curr->left;
                // Condition in While loop for pred->right and curr is same than not allowed
                while(pred->right!=curr  && pred->right){
                    pred=pred->right;
                }
                // if pred right node is null,then go left after establishing path like from pred to curr
                if(pred->right==nullptr){
                    pred->right=curr;
                    curr=curr->left;
                }
                else{
                    // left is already visited go right after visiting curr node removing establish path
                    pred->right=nullptr;
                    ans.push_back(curr->val);
                    curr=curr->right;
                }
            }
        }
        return ans;
    }
};