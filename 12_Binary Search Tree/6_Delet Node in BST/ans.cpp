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
int MaxVal(Node* root){
    Node* temp=root;
    if(temp==NULL){
        return -1;
    }
    while(temp->right){
        temp=temp->right;
    }
    return temp->data;
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
Node* DeleteNodeInBST(Node* root,int target){
    if(root==NULL){
        return NULL;
    }
    if(root->data==target){
    // 4 Case of Target Valu
        // 1 case : root is Leaf Node than Target is root
        if(root->left==NULL && root->right==NULL){
            // For Connection of Upper Node
            return NULL;
        }
        // 2 case : root ka right Child is available but left is NULL than Target is root
        else if(root->left==NULL && root->right!=NULL){
            Node* child=root->right;
            // For Connection of Upper Node
            return child;
        }
        // 3 case : root ka left Child is available but right is NULL than Target is root
        else if(root->left!=NULL && root->right==NULL){
            Node* child=root->left;
            // For Connection of Upper Node
            return child;
        }
        // 4 case : root ka  left and right child Both available than Target is root
        else{
            // First find Max Valu of root->left subtree is call Inorder Predecessor
            int InOrderPre=MaxVal(root->left);
            // Replace root->data to InOrderPredecessor
            root->data=InOrderPre;
            //delete inorder predecessor from left subtree
			root->left = DeleteNodeInBST(root->left,InOrderPre);
			// For Connection of Upper Node
			return root;
        }
    }
    // For check right me ya left me jana hai
    else if(target > root -> data) {
		//right jana chahiye
		root->right =  DeleteNodeInBST(root->right, target);
	}
	else if(target < root->data) {
		//left jana chahioye
		root->left = DeleteNodeInBST(root->left, target);
	}
	return root;
}
int main()
{
    // 10 4 20 2 8 11 25 6 17 -1
    Node* root=NULL;
    cout<<"Enter Data"<<endl;
    takeInput(root);
    DeleteNodeInBST(root,8);
    cout<<endl;
    LevelOrderTraversal(root);
    return 0;
}