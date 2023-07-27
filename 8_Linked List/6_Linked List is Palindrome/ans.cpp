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
    cout<<endl;
}
Node* FindeMiddleNode(Node* &head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    Node* slower=head;
    Node* faster=head->next;
    while(faster!=NULL){
        faster=faster->next;
        if(faster!=NULL){
            faster=faster->next;
            slower=slower->next;
        }
    }
    return slower;
}
Node* ReverceLL(Node* &head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    Node* prev=NULL;
    Node* curr=head;
    Node* forward=curr->next;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}
bool checkIsLLPalindrome(Node* &head){
    if(head==NULL && head->next==NULL){
        return true;
    }
    Node* middle=FindeMiddleNode(head);
    // head1 is reverce Linked List ka head hai 
    Node* head1=ReverceLL(middle->next);
    // connect Linkedlist of reverce
    middle->next=head1;
    // compare linked list head ka data and Reverce linked list ke head1 ka data
    while(head1!=NULL){
        if(head->data==head1->data){
            head=head->next;
            head1=head1->next;
        }
        else{
            return false;
        }
    }
    return true;
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
    Node* fourth=new Node(20);
    Node* fifth=new Node(10);

// Connection of every Node next to creat Linklist  and fifth ka next=NULL
// firs->next (mean first ke next vala box(first ka second box addresh vala) (Node* next)) me =second (second ka address dal do (Node* second))
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    PrintLinkedList(first);
    // Node* head=ReverceLL(first);
    // PrintLinkedList(head);
    // cout<<"find middle: "<<FindeMiddleNode(first)->data<<endl;
    cout<<"Linked List is Palindrome: "<<checkIsLLPalindrome(first)<<endl;
    return 0;
}