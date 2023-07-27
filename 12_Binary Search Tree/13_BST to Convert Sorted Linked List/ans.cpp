#include<bits/stdc++.h>
using namespace std;
class Node {
        public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
                this->data = data;
                this->left = NULL;
                this->right = NULL;
        }
};
Node* insertIntoBST(Node* root, int data) {

        if(root == NULL) {
                //this is the first node we have to create
                root = new Node(data);
                return root;
        }

        //no the first node 

        if(root-> data > data) {
                //insert in left
                root->left = insertIntoBST(root->left, data);
        }
        else {
                //insert into right
                root->right = insertIntoBST(root->right, data);
        }
        return root;
}

void takeInput(Node* &root) {
        int data;
        cin >> data;

        while(data != -1) {
                root = insertIntoBST(root, data);
                cin >> data;
        }
}

void BSTtoConvertSortedLL(Node* root,Node* &head){
    if(root==NULL){
        return ;
    }
    // case 1:
    // right Subtree Creat Using Recursive call
    // Why First Creat right Subtree ? Because of using left Subtree than Maintain Tail Extra Pointer
    BSTtoConvertSortedLL(root->right,head);

    // case 2: 
    // root Node to attach right Subtree
    root->right=head;
    // Why condition ? because of connect Only Nodes Not NULL ptr
    if(head!=NULL){
        head->left=root;
    }

    // case 3:
    // Update head
    head=root;

    // case 4:
    // left Subtree code is created By Recursive call to Upper code
    BSTtoConvertSortedLL(root->left,head);
}
void PrintLL(Node* &head){
    Node* temp=head;
    cout<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
    cout<<endl;
}
int main()
{
    // 500 250 600 100 400 540 700 300 560 -1   
    Node* root=NULL;
    cout<<"Enter Data"<<endl;
    takeInput(root);
    Node* head=NULL;
    BSTtoConvertSortedLL(root,head);
    cout<<"Printing Linked List"<<endl;
    PrintLL(head);

    return 0;
}