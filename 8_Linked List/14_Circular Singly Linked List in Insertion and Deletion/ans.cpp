#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // Node ko initialize karna hai through Constructor
    // No data in Node than constructor call 
    Node(){
        this->data=0;
        this->next=NULL;
    }
    // Node Constructor paramiter of data call than initialize this Node in data 
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    // delete Node
    ~Node(){
        cout<<endl<<"Deleted Node : "<<this->data<<endl;
    }

};
// (Node* head) jaha se linked list print karni hai vaha ka first address peramiter me dalo
void PrintLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// I want to insert node right at the head of Linked List
// data is add newNode at headnode
// &head jaruri hai because main addresh in add not creat copy of head pointer
void insertAtHead(Node* &head,Node* &tail,int data){
    // Empty Linked List case than tail and head can point 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    // Non Empty Linked List case than add data At Head and head can point
    // step1: Create New node and add data
    Node* newNode=new Node(data);
    // step2:connection of headNode to newNode (newNode->next = head)
    newNode->next=head;
    // step3:connection is Done than head node is newNode (newNode add hone ke bad newNode hi head hai)
    head=newNode;
}
// I want to insert a node right at the end of Linked List
// data is add newNode at tail node
void insertAtTail(Node* &head,Node* &tail,int data){
    // Empty Linked List case than tail and head can point 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    // Non Empty Linked List case than add data At tail and tail can point
    // step1: Create New node and add data
    Node* newNode=new Node(data);
    // step2: connection of tailNode to newNode (tail->next=newNode)
    tail->next=newNode;
    // step3: connection is Done than tail node is newNode (newNode add hone ke bad newNode hi tail hai)
    tail=newNode;
}
int findlength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    // Empty Linked List case than tail and head can point 
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    // Non Empty Linked List case than add data At tail and tail can point
    // starting position me insert Node
    if(position==0){
        // starting positon is same as insertAtHead same as
        insertAtHead(head,tail,data);
        return ;
    }
    // ending position me insert Node
    int len=findlength(head);
    if(position>len){
        // ending position is same as insertAtTail same as
        insertAtTail(head,tail,data);
    }

    // middle position me insert Node
    // step1: find pre and cur position of Node 
    int i=1;
    Node* pre=head;
    while(i< position){
        pre=pre->next;
        i++;
    }
    Node* cur=pre->next;
    // step2: creat insert newNode 
    Node* newNode=new Node(data);

    // step3: connection of current Node
    newNode->next=cur;

    // step4: connection of previouse Node
    pre->next=newNode;

}

void deleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"Cannot delete . LL is empty"<<endl;
    }
    // first position Node delete
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return ;
    }
    // middle position Node delete
    // step1:find pre and curr
    Node* pre=head;
    int i=1;
    while(i<position-1){
        pre=pre->next;
        i++;
    }
    Node* cur=pre->next;
    // step2:
    pre->next=cur->next;
    // step3:
    cur->next=NULL;
    // step4;
    delete cur;


    // last position Node delete
    int len=findlength(head);
    // cout<<"len:"<<len<<endl;
    // cout<<"pos:"<<position<<endl;
    if(position==len){
        // step1:find pre
        int i=1;
        Node* pre=head;
        while(i< position-1){
            // How position-1 can Work ?
            // Because of pre->next can point
            // cout<<endl<<"i:"<<i<<"Previouc Data:"<<pre->data<<endl;
            pre=pre->next;
            // cout<<"after next"<<endl;
            // cout<<endl<<"i:"<<i<<"Previouc Data:"<<pre->data<<endl;
            i++;
        }
        
        // step2:
        pre->next=NULL;
        // step3:
        Node* temp=tail;
        // step4:
        tail=pre;
        // step5:
        delete temp;
        return ;
    }
}


int main()
{
    // Node* head=new Node(10);
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    insertAtTail(head,tail,90);
    insertAtTail(head,tail,100);
    insertAtTail(head,tail,120);
    insertAtTail(head,tail,130);

    // cout<<endl<<"Before insertion at Position to linked list"<<endl;
    PrintLinkedList(head);
    // cout<<endl<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;
    // insertAtPosition(head,tail,500,0);
    // cout<<endl<<"after insertion at Position to linked list"<<endl;
    // PrintLinkedList(head);
    // cout<<endl<<"head: "<<head->data<<endl;
    // cout<<"tail: "<<tail->data<<endl;

    // deleteNode(head,tail,5);
    // PrintLinkedList(head);

    insertAtPosition(head,tail,1000,2);
    cout<<endl;
    PrintLinkedList(head);



    return 0;
}