#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        cout<<endl<<"Deleted Node is : "<<this->data<<endl;
    }
};

void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int findLength(Node* &head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    // LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    // LL is not empty
    Node* newNode=new Node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    // LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    // LL is not empty
    Node* newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    // LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return ;
    }
    // starting position in inset Node
    if(position==1){
        insertAtHead(head,tail,data);
        return ;
    }
    // ending position in insert NOde
    int len=findLength(head);
    if(position>len){
        insertAtTail(head,tail,data);
        return ;
    }
    // LL is not empty
    // step 1: previouce and current Node find at postion
    int i=1;
    Node* prevNode=head;
    while(i<position-1){
        prevNode=prevNode->next;
        i++;
    }
    Node* cur=prevNode->next;
    // step 2:creat newNode
    Node* newNode=new Node(data);
    // step 3:connection
    // *with use of prevNode and cur Node
    // ->Not Order Matter
        prevNode->next=newNode;
        newNode->prev=prevNode;
        cur->prev=newNode;
        newNode->next=cur;
    // *Only use of prevNode
    // ->Order Matter
        // prevNode->next->prev=newNode;
        // newNode->next=prevNode->next;
        // prevNode->next=newNode;
        // newNode->prev=prevNode;

}

void deleteAtPos(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"LL is Empty Cannot delete"<<endl;
        return ;
    }
    //One Node ke liye
    if(head->next==NULL){
        Node* temp=head;
        head=NULL;
        delete temp;
        return ;
    }
    // wrong position
    int len=findLength(head);
    if(position>len){
        cout<<"Wrong Position.."<<endl;
        return ;
    }
    // first Position delete Node
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        head->prev=NULL;
        delete temp;
        return ;
    }
    // last Position delete Node
    if(position==len){
        Node* temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return ;
    }
    // middle Position Node delete 
    // step1: find left,curr,right
    Node* left=head;
    int i=1;
    while(i<position-1){
        left=left->next;
        i++;
    }
    Node* curr=left->next;
    Node* right=curr->next;

    // step2: creat  connection
    left->next=right;
    right->prev=left;
    // step3: destroy connection of curr
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;

}
int main()
{
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* head=first;
    Node* tail=third;

    first->next=second;
    second->prev=first;

    second->next=third;
    third->prev=second;

    printLL(head);
    // insertAtHead(head,tail,40);
    // insertAtTail(head,tail,40);
    // insertAtPosition(head,tail,40,3);
    cout<<endl;
    printLL(head);
    deleteAtPos(head,tail,4);
    cout<<endl;
    printLL(head);
    return 0;
}