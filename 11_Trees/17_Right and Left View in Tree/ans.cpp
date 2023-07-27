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

void printRightView(Node* root, vector<int> &ans, int level) {
	//base case
	if(root == NULL) 
		return;

	if(level == ans.size()) {
		ans.push_back(root->data);
	}

	//right
	printRightView(root->right, ans, level+1);

	//left
	printRightView(root->left, ans, level+1);	
}


void printLeftView(Node* root, vector<int> &ans, int level) {
	//base case
	if(root == NULL) 
		return;

	if(level == ans.size()) {
		ans.push_back(root->data);
	}

	//left
	printLeftView(root->left, ans, level+1);
	//right
	printLeftView(root->right, ans, level+1);
	
}
void printAns(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    // 10 20 30 -1 -1 40 60 -1 -1 -1 80 50 -1 70 -1 -1 90 -1 -1 
    Node* root=buildTree();
    vector<int> rightAns;
    vector<int> leftAns;
    printRightView(root,rightAns,0);
    // Right Ans
    // 10 80 90 70
    cout<<"Right Ans"<<endl;
    printAns(rightAns);
    printLeftView(root,leftAns,0);
    // left Ans
    // 10 20 30 60
    cout<<"left Ans"<<endl;
    printAns(leftAns);

    return 0;
}