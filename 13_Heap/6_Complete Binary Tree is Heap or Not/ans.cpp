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
    cout<<"Enter data"<<endl;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);

    cout<<"Left Node Data"<<data<<endl;
    root->left=BuildTree();

    cout<<"Right Node Data"<<data<<endl;
    root->right=BuildTree();

    return root;
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

pair<bool,int> CheckCompletBTisHeap(Node* root){
    if(root==NULL){
        pair<bool,int> p=make_pair(true,INT_MIN);
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p=make_pair(true,root->data);
        return p;
    }

    pair<bool,int> leftAns=CheckCompletBTisHeap(root->left);
    pair<bool,int> rightAns=CheckCompletBTisHeap(root->right);

    if(leftAns.first==true && rightAns.first==true && root->data > leftAns.second && root->data <rightAns.second){
        pair<bool, int> p =  make_pair(true, root->data);
        return p;
    }
    else{
        pair<bool, int> p =  make_pair(false, root->data);
        return p;
    }
}
int main()
{
    // 10 5  1 -1 -1 2 -1 -1 6 3 -1 -1 -1
    Node* root=NULL;
    root=BuildTree();
    LevelOrderTraversal(root);
    pair<bool,int> p=CheckCompletBTisHeap(root);
    cout<<p.first<<endl;

    return 0;
}