#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data=0;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* FindMiddleNode(Node* &head){
    // Empty Linked List
    if(head==NULL){
        cout<<" LL is Empty "<<endl;
        return head;
    }
    // Only One Node
    if(head->next==NULL){
        return head;
    } 
    // gretter than One (>1) Node 
    Node* slower=head;
    // Node* faster=head;
    Node* faster=head->next;
    while(faster!=NULL && slower!=NULL){
        faster=faster->next;
        if(faster!=NULL){
            faster=faster->next;
            slower=slower->next;
        }
    }
    return slower;
}

int main()
{
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    printLL(head);
    cout<<endl<<"Middle Node: "<<FindMiddleNode(head)->data<<endl;


    return 0;
}