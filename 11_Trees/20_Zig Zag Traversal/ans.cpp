// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/965581341/
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
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        bool LtoRdir=true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int width=q.size();
            vector<int> oneLevel(width);
            for(int i=0;i<width;i++){
                TreeNode* temp=q.front();
                q.pop();
                int index= LtoRdir ? i : width-i-1;
                oneLevel[index]=temp->val;
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            // Toggale the Falge to Choose Direction
            LtoRdir=!LtoRdir;
            ans.push_back(oneLevel);
        }
        return ans;
    }
};