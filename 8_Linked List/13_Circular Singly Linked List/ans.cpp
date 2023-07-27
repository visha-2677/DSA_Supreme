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
void PrintLinkedList(Node* &head){
    Node* temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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

// Connection of every Node next to creat Linklist  and fifth ka next=NULL
// firs->next (mean first ke next vala box(first ka second box addresh vala) (Node* next)) me =second (second ka address dal do (Node* second))
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=first;

    PrintLinkedList(first);

    return 0;
}