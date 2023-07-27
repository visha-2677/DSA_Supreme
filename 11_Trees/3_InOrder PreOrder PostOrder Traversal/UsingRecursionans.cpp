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
int height(Node* root) {
	if(root == NULL) 
		return 0;

	int leftHeight = height(root->left);
	int rightHeight = height(root->right);
	int ans = max(leftHeight, rightHeight) + 1;
	return ans;
}

void inorderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return ;
	}

	//LNR
	inorderTraversal(root->left);
	cout << root -> data << " ";
	inorderTraversal(root->right);
}

void preorderTraversal(Node* root) {
	//base case
	if(root == NULL) {
		return ;
	}

	//NLR
	cout << root -> data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
}

void postorderTraversal(Node* root) {
	if(root == NULL)
		return;

	//LRN
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root -> data << " ";
}
int main()
{
    Node* root;
    root=BuildTree();
    int h=height(root);
    cout<<h;
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    preorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);


    return 0;
}