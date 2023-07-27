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

Node* SortedLinkedListInToBST(Node* &head,int n){
    if(n<=0 || head==NULL){
        return NULL;
    }
    // Why First Call Left ? Because Not Traverse in Linked List to Complex code
    // Node* leftSubTree=SortedLinkedListInToBST(head,n/2);
    Node* leftSubTree=SortedLinkedListInToBST(head,n-1-n/2);

    Node* root=head;
    root->left=leftSubTree;

    // Update head
    head=head->right;

    // Right call to Creat RightSubTree to UpperCode;
    // root->right=SortedLinkedListInToBST(head,n-1-n/2);
    root->right=SortedLinkedListInToBST(head,n/2);
    return root;
}
void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->right;
    }
}
int main()
{
    Node* head=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(3);
    Node* four=new Node(4);
    Node* five=new Node(5);
    Node* six=new Node(6);
    // Node* seven=new Node(7);
    head->right=second;
    second->left=head;

    second->right=third;
    third->left=second;

    third->right=four;
    four->left=third;

    four->right=five;
    five->left=four;

    five->right=six;
    six->left=five;

    // six->right=seven;
    // seven->left=six;

    cout<<"Printing LL"<<endl;
    printLL(head);
    // Node* root;
    cout<<endl;
    Node* root=SortedLinkedListInToBST(head,6);

    cout<<" Printing Tree"<<endl;
    levelOrderTraversal(root);
    return 0;
}