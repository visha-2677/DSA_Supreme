#include<bits/stdc++.h>
using namespace std;
// class Node {
//         public:
//         int data;
//         Node* left;
//         Node* right;

//         Node(int data) {
//                 this->data = data;
//                 this->left = NULL;
//                 this->right = NULL;
//         }
// };
// class NodeData{
//     public:
//     int size;
//     int minVal;
//     int maxVal;
//     bool validBST;
//     NodeData(){}
//     NodeData(bool valid,int max,int min,int size){
//         this->size=size;
//         maxVal=max;
//         minVal=min;
//         validBST=valid;
//     }
// };
// void levelOrderTraversal(Node* root ) {
// 	queue<Node*> q;
// 	//initially
// 	q.push(root);
// 	q.push(NULL);

// 	while(!q.empty()) {
// 		//A
// 		Node* temp = q.front();
// 		//B
// 		q.pop();
		
// 		if(temp == NULL) {
// 			cout << endl;
// 			if(!q.empty()) {
// 				q.push(NULL);
// 			}	
// 		}
// 		else {
// 			//C
// 			cout << temp->data << " ";
// 			//D
// 			if(temp -> left) {
// 				q.push(temp ->left);
// 			}
// 			if(temp ->right) {
// 				q.push(temp->right);
// 			}
// 		}
		
		
// 	}
// }
// NodeData* LargestBSTinBT(Node* root,int &ans){
//     // base case
//     if(root==NULL){
//         NodeData* temp=new NodeData(true,INT_MIN,INT_MAX,0);
//         return temp;
//     }
//     // Bottom to Top Approch than First right and left call
//     NodeData* leftAns=LargestBSTinBT(root->left,ans);
//     NodeData* rightAns=LargestBSTinBT(root->right,ans);

//     // Checking for Node
//     NodeData* CurrNodeAns=new NodeData();
//     CurrNodeAns->size=leftAns->size+rightAns->size+1;
//     CurrNodeAns->maxVal=max(root->data,rightAns->maxVal);
//     CurrNodeAns->minVal=max(root->data,leftAns->minVal);

//     if(leftAns->validBST && rightAns->validBST && (root->data > leftAns->maxVal && root->data < rightAns->minVal)){
//         CurrNodeAns->validBST=true;
//     }
//     else{
//         CurrNodeAns->validBST=false;
//     }

//     if(CurrNodeAns->validBST){
//         ans=max(ans,CurrNodeAns->size);
//     }
//     return CurrNodeAns;
// }











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

class NodeData {
	public:
	int size;
	int minVal;
	int maxVal;
	bool validBST;

	NodeData() {
		
	}
	NodeData(int size, int max, int min, bool valid) {
		this->size = size;
		minVal = min;
		maxVal = max;
		validBST = valid;
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
void levelOrderTraversal(Node* root ) {
	queue<Node*> q;
	//initially
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		//A
		Node* temp = q.front();
		//B
		q.pop();
		
		if(temp == NULL) {
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}	
		}
		else {
			//C
			cout << temp->data << " ";
			//D
			if(temp -> left) {
				q.push(temp ->left);
			}
			if(temp ->right) {
				q.push(temp->right);
			}
		}
		
		
	}
}



NodeData* findLargestBST(Node* root, int &ans) {
	//base case
	if(root == NULL) {
		NodeData* temp  = new NodeData(0, INT_MIN, INT_MAX, true);
		return temp;
	}

	NodeData* leftKaAns = findLargestBST(root->left, ans);
	NodeData* rightKaAns = findLargestBST(root->right,ans);

	//checking starts here
	NodeData* currNodeKaAns = new NodeData();

	currNodeKaAns->size = leftKaAns->size + rightKaAns->size + 1;
	currNodeKaAns->maxVal = max(root->data, rightKaAns->maxVal);
	currNodeKaAns->minVal = min(root->data, leftKaAns->minVal);

	if(leftKaAns->validBST && rightKaAns->validBST && (root->data > leftKaAns->maxVal && root->data < rightKaAns->minVal) ) {
		currNodeKaAns->validBST = true;
	}
	else {
		currNodeKaAns->validBST = false;
	}

	if(currNodeKaAns->validBST) {
		ans = max(ans, currNodeKaAns->size);
	}
	return currNodeKaAns;
}
int main()
{
    // // Creat Binary Tree
    // Node* root=new Node(50);
    // Node* first=new Node(30);
    // Node* second=new Node(60);
    // Node* third=new Node(5);
    // Node* four=new Node(20);
    // Node* fifth=new Node(45);
    // Node* six=new Node(70);
    // Node* seven=new Node(65);
    // Node* eight=new Node(80);

    // root->left=first;
    // root->right=second;

    // first->left=third;
    // first->right=four;

	// second->left = fifth;
	// second->right = six;

    // six->left = seven;
	// six->right= eight;

    // cout<<"Printing Tree "<<endl;
    // levelOrderTraversal(root);
    // cout<<endl;
    // int ans=0;
    // LargestBSTinBT(root,ans);
    // cout<<"Largest BST ka Size: "<<ans<<endl;


    Node* root = new Node(50);
		Node* first = new Node(30);
		Node* second = new Node(60);
		Node* third = new Node(5);
		Node* fourth = new Node(20);
		Node* fifth = new Node(45);
		Node* sixth = new Node(70);
		Node* seventh = new Node(65);
		Node* eight = new Node(80);

		root->left = first;
		root->right = second;
		first->left = third;
		first -> right = fourth;
		second->left = fifth;
		second->right = sixth;
		sixth->left = seventh;
		sixth->right= eight;



	
	  cout << "Printing the tree" << endl;
	  levelOrderTraversal(root);


	  int ans = 0;
	  findLargestBST(root,ans);
	  cout << "Largest BSK ka Size:  "<< ans << endl;
    return 0;
}