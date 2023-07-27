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

};
// (Node* head) jaha se linked list print karni hai vaha ka first address peramiter me dalo
void PrintLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

// Using While Loop to Reverce LL
Node* ReverceusingLoop(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL){
        Node* temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
// Using Recursion to Reverce LL
Node* ReverceusingRecursion1(Node* prev,Node* curr){
    // base case 
    if(curr==NULL){
        return prev;
    }
    // 1 case sambhal lo
    Node* temp=curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;
    // baki recursion sambhal lega
    ReverceusingRecursion1(prev,curr);
}
// second method to solve using recursion
Node* ReverceusingRecursion2(Node* &prev, Node* &curr) {
        //base case
        if(curr == NULL) {
                //LL reverse ho chuki
                return prev;
        }
        
        //1 case solve then recursion will take care
        Node* temp = curr -> next;
        curr -> next = prev;

        ReverceusingRecursion2(curr, temp);
}

int findLength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
// Reverce K node in Linked List
Node* ReverceKNodeLL(Node* &head,int k){
    // Empty and One Node Linked List
    if(head==NULL && head->next==NULL ){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    // if k is gretterthan LL Length than Inlvalid k
    int len=findLength(head); 
    if(k>len){
        // cout<<"invlid k "<<endl;
        return head;
    }
    // if k is lessthan LL Length than ReverceKNode
    // step1: reverce first K Node (1 case sambhal lo)
    Node* prev=NULL;
    Node* curr=head;
    Node* temp=curr->next;
    int count=0;

    while(count<k){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
        count++;
    }
    // step2:Recursive call (baki recursion sambhal lega)
    if(temp != NULL){
        // than reverce first k Node than head is last Node to connection Other k reverce Node
        head->next=ReverceKNodeLL(temp,k);
    }
    // because reverce k Node than prev Node is head of RerverceKNode Linked List
    return prev;
}

int main()
{
    // creat Empty Node mean data=0 and next=NULL 
    // Node* first=new Node();
    // Node* second=new Node();
    // Node* third=new Node();
    // Node* fourth=new Node();
    // Node* fifth=new Node();
    // Insert data in Empty Node throgh paramiter Constructor
    Node* first=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(41);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);

// Connection of every Node next to creat Linklist  and fifth ka next=NULL
// firs->next (mean first ke next vala box(first ka second box addresh vala) (Node* next)) me =second (second ka address dal do (Node* second))
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;

    PrintLinkedList(first);
    // cout<<endl;
    // // Node* head=ReverceusingLoop(first);
    // Node* prev=NULL;
    // Node* curr=first;
    // Node* head=ReverceusingRecursion2(prev,curr);
    // PrintLinkedList(head);
    Node* head=ReverceKNodeLL(first,3);
    cout<<endl;
    PrintLinkedList(head);
    return 0;
}