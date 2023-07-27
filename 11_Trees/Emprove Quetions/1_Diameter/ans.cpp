#include<bits/stdc++.h>
using namespace std;
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
int D=0;
int height(Node* root){
    if(root==NULL) return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    int CurrD=lh+rh;
    D=max(D,CurrD);
    return max(lh,rh)+1;
}
int diameterOfBinaryTree(Node* root) {
    height(root);
    return D;
}
int main()
{
    Node* root=BuildTree();
    cout<<diameterOfBinaryTree(root);
    return 0;
}