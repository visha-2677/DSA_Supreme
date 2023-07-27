#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node* buildTree() {
	int data; 
	cout << "Enter the data: " << endl;
	cin >> data;

	if(data == -1) {
		return NULL;
	}

	//Step A , B and C
	Node* root = new Node(data);

	cout << "Enter data for left part of " << data << " node " << endl;
	root->left = buildTree();
	
	cout << "Enter data for right part of " << data << " node " << endl;
	root-> right = buildTree();

	return root;
}
// same as Level Order Traversal But Some are Condition to Print and Add Horizontal Distance to Check Condition to print
void printTopView(Node* root){
    if(root==NULL) return ;
    // creat Map to store HD and TopNode->data
    map<int,int> topNode;

    // Level Order
    // We wil store a pair of consisting of Node and Horizontal Distance(HD)
    queue< pair<Node*,int> > q;
    // Assum than first Node HD=0
    q.push(make_pair(root,0));

    while(!q.empty()){
        // store temp in Fist element of queue
        pair<Node* ,int> temp=q.front();
        // Because of pop()
        q.pop();

        // front node ka data and distance
        Node* frontNode= temp.first;
        int hd=temp.second;

        //jo bhi horizontal distance aaya h , check if answer for that hd already exists in map(topNode) or not
        if(topNode.find(hd)==topNode.end()){
            // creat entry
            topNode[hd]=frontNode->data;
        }
        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    // ans can stroe in map than print
    cout<<" Top view Ans is Printing"<<endl;
    for(auto i:topNode){
        cout<<i.first<< " -> "<<i.second<<endl;
    }
}

// same as Level Order Traversal But Some are Condition to Print and Add Horizontal Distance to Check Condition to print
void printBottomView(Node* root){
    if(root==NULL) return ;
    // creat Map to store HD and TopNode->data
    map<int,int> topNode;

    // Level Order
    // We wil store a pair of consisting of Node and Horizontal Distance(HD)
    queue< pair<Node*,int> > q;
    // Assum than first Node HD=0
    q.push(make_pair(root,0));

    while(!q.empty()){
        // store temp in Fist element of queue
        pair<Node* ,int> temp=q.front();
        // Because of pop()
        q.pop();

        // front node ka data and distance
        Node* frontNode= temp.first;
        int hd=temp.second;

        //Override of data entry is Possible Not condition
        // entry in Map
        topNode[hd]=frontNode->data;

        if(frontNode->left){
            q.push(make_pair(frontNode->left,hd-1));
        }
        if(frontNode->right){
            q.push(make_pair(frontNode->right,hd+1));
        }
    }
    // ans can stroe in map than print
    cout<<" Bottom view Ans is Printing"<<endl;
    for(auto i:topNode){
        cout<<i.first<< " -> "<<i.second<<endl;
    }
}

int main()
{
    // 10 20 30 -1 -1 40 60 -1 -1 70 -1 -1 50 -1 90 80 -1 -1 100 -1 -1
    Node* root=buildTree();
    // Top view Ans : 30,20,10,50,90,100
    printTopView(root);
    // Bottom view Ans : 30,60,40,80,90,100
    printBottomView(root);

    return 0;
}