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
int findPosition(int arr[], int n, int element) {
        for(int i=0; i<n; i++) {
                if(arr[i] == element) {
                        return i;
                }
        }
        return -1;
}
Node* InOrderPreOrderToBuidTree(int inOrder[],int preOrder[],int size,int &preIndex,int inOrderStart,int inOrderEnd){
    // base case
    if(preIndex >= size || inOrderStart >inOrderEnd){
        return NULL;
    }
    // Step A:
    int element=preOrder[preIndex++];
    Node* root=new Node(element);
    int pos=findPosition(inOrder,size,element);

    // Step:B
    root->left = InOrderPreOrderToBuidTree(inOrder,preOrder,size,preIndex,inOrderStart,pos-1);
    root->right = InOrderPreOrderToBuidTree(inOrder,preOrder,size,preIndex,pos+1,inOrderEnd);

    return root;
}
int main()
{
    Node* root;
    int inOrder[]={40,20,50,10,60,30,70};
    int preOrder[]={10,20,40,50,30,60,70};
    int size=7;
    int preIndex=0;
    int inOrderStart=0;
    int inOrderEnd=size-1;

    root=InOrderPreOrderToBuidTree(inOrder,preOrder,size,preIndex,inOrderStart,inOrderEnd);
    LevelOrderTraversal(root);
    return 0;
}