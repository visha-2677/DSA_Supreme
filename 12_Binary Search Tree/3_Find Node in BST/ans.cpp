#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* CreatBinarySearchTree(Node* root,int data){
    if(root==NULL){
        //this is the first node we have to create
        root=new Node(data);
        return root;
    }
    // no first node
    if(root->data>data){
        // insert in left
        root->left=CreatBinarySearchTree(root->left,data);
    }
    else{
        // insert in right
        root->right=CreatBinarySearchTree(root->right,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=CreatBinarySearchTree(root,data);
        cin>>data;
    }
}

Node* FindNodeInBST(Node* root,int target){
    if(root==NULL){
        return NULL;
    }
    if(root->data==target){
        return root;
    }
    if(root->data>target){
        return FindNodeInBST(root->left,target);
    }
    else{
        return FindNodeInBST(root->right,target);
    }
}
int main()
{
    // 10 5 20 2 8 11 25 4 6 17 15 -1
    Node* root=NULL;
    cout<<"Enter data"<<endl;
    takeInput(root);
    int target=101;
    bool ans=FindNodeInBST(root,target);
    cout<<ans<<endl;

    return 0;
}