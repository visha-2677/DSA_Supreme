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
// First Solution is Time complexity is O(n^2) slower
    // int height(TreeNode* root){
    //     if(root==NULL)
    //         return 0;
    //     int leftHeight=height(root->left);
    //     int rightHeight=height(root->right);
    //     int ans=1+max(leftHeight,rightHeight);
    //     return ans;
    // }
    // bool isBalanced(TreeNode* root) {
    //     if(root==NULL)
    //         return true;
    //     int leftheight=height(root->left);
    //     int rightheight=height(root->right);
    //     int diff=abs(leftheight-rightheight);

    //     bool ans1=(diff<=1);

    //     bool leftAns=isBalanced(root->left);
    //     bool rightAns=isBalanced(root->right);

    //     if(ans1 && leftAns && rightAns){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
// Second Solution Time Complexity is O(n) faster
bool isBalance=true;
    int hight(TreeNode* root){
        if(root==NULL) return 0;
        int lh=hight(root->left);
        int rh=hight(root->right);
        if(isBalance && abs(lh-rh)>1)
            isBalance=false;
        return max(lh,rh)+1;
    }
    bool isBalanced(TreeNode* root) {
        hight(root);
        return isBalance;
    }
};