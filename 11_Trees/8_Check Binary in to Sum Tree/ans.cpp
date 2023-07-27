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

void LevelOrderTraversal(Node* root){
    queue<Node*> q;
    // initially
    q.push(root);
    // Why NULL? Because check for Level to endl print
    q.push(NULL);
    // Why condion of !empty()? Because of creat Infinit loop Not Occure for this reasion
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

int ConvertIntoSumTree(Node* root){
    if(root==NULL){
        return 0;
    }

    int leftAns=ConvertIntoSumTree(root->left);
    int rightAns=ConvertIntoSumTree(root->right);

    root->data=leftAns+root->data+rightAns;

    return root->data;
}

int main()
{
    Node* root=BuildTree();
    int ans=ConvertIntoSumTree(root);
    cout<<ans<<endl;
    LevelOrderTraversal(root);
    return 0;
}