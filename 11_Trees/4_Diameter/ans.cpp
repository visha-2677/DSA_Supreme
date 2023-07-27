#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/diameter-of-binary-tree/description/
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
Node* BuildTree(){
    int data;
    cout<<"Enter Data:";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);

    cout<<"Left Node data is :"<<data<<endl;
    root->left=BuildTree();

    cout<<"Right Node data is :"<<data<<endl;
    root->right=BuildTree();

    return root;

}
int maxDepth(Node* root) {
        if(root == NULL) 
		return 0;

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        int ans = max(leftHeight, rightHeight) + 1;
        return ans;
}
int diameterOfBinaryTree(Node* root) {
        if(root == NULL) 
        return 0;
        // cout<<endl<<"left ka data: "<<root->left->data<<endl;
        int op1 = diameterOfBinaryTree(root->left);
        // cout<<endl<<"Op1: "<<op1<<endl;

        // cout<<endl<<"right ka data: "<<root->left->data<<endl;
        int op2 = diameterOfBinaryTree(root->right);
        // cout<<endl<<"Op2: "<<op2<<endl;

        int op3 = maxDepth(root->left) + maxDepth(root->right);
        cout<<endl<<"Op3: "<<op3<<endl;

        int ans = max(op1, max(op2, op3));
        // cout<<endl<<"ans: "<<ans<<endl;
        return ans ;
}
int main()
{
    Node* root;
    root=BuildTree();
    int d=diameterOfBinaryTree(root);
    cout<<d<<endl;
    return 0;
}