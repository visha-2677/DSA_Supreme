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
void PrintLinkedList(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* ReverceusingLoop(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    Node* temp=curr->next;
    while(curr!=NULL){
        temp=curr->next;
        curr->next=prev;
        prev=curr;
        curr=temp;
    }
    return prev;
}
Node* solve(Node* &head1,Node* &head2){

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    head1=ReverceusingLoop(head1);
    head2=ReverceusingLoop(head2);

    Node* ansHead=NULL;
    Node* ansTail=NULL;
    int carry=0;
    
    while(head1!=NULL && head2!=NULL){
        int sum=carry+head1->data+head2->data;
        int digit=sum%10;
        carry=sum/10;

        // in ans digit can store than creat newNode than store digit in ans
        Node* newNode=new Node(digit);
        // store newNode in ans Linked List
        if(ansHead==NULL){
            // first Node insert in anshead
            ansHead=newNode;
            ansTail=newNode;
        }
        // more than One Node store in anshead
        else{
            ansTail->next=newNode;
            ansTail=newNode;//becase change ansTail to newNode
        }
        head1=head1->next;
        head2=head2->next;
    }
    // jab head1 ki length head2 se jada hogi
    while(head1!=NULL){
        int sum=carry+head1->data;
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head1=head1->next;
    }
    // jab head2 ki length head1 se jada hogi
    while(head2!=NULL){
        int sum=carry+head2->data;
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
        head2=head2->next;
    }
    // Extra Carry Handled
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        ansTail->next=newNode;
        ansTail=newNode;
    }
    ansHead=ReverceusingLoop(ansHead);
    return ansHead;

}
int main()
{
    Node* head1=new Node(9);
    Node* second1=new Node(9);
    head1->next=second1;

    Node* head2=new Node(9);
    Node* second2=new Node(9);
    Node* third2=new Node(3);
    head2->next=second2;
    second2->next=third2;
    
    Node* ans=solve(head1,head2);
    PrintLinkedList(ans);
    return 0;
}