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

bool checkLoopisPrecent(Node* &head){
    if(head==NULL){
        cout<<"LL is Empty "<<endl;
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow){
            // loop is precent
            return true;
        }
    }
    return false;
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
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);
    Node* sixth=new Node(60);
    Node* seven=new Node(70);
    Node* eight=new Node(80);

// Connection of every Node next to creat Linklist  and fifth ka next=NULL
// firs->next (mean first ke next vala box(first ka second box addresh vala) (Node* next)) me =second (second ka address dal do (Node* second))
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seven;
    seven->next=eight;
    // eight->next=fourth;
    eight->next=NULL;

    // PrintLinkedList(first);
    cout<<"check loop is exist or Not :"<<checkLoopisPrecent(first)<<endl;

    return 0;
}