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
void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }            
        }
    }
}
int main()
{
    Node* root=NULL;
    cout<<" Enter data "<<endl;
    takeInput(root);
    cout<<"Printing Tree "<<endl;
    LevelOrderTraversal(root);
    return 0;
}