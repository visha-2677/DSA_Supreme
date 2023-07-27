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
    ~Node(){
        cout<<"deleted :"<<this->data<<endl;
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
// With Using Data Replecement
void Sort012UsingDataReplecement(Node* &head){
    int zero=0;
    int One=0;
    int two=0;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            zero++;
        }
        else if(temp->data==1){
            One++;
        }
        else{
            two++;
        }
        temp=temp->next;
    }

    // 0s 1s and 2s place
    temp=head;
    while(zero--){
        temp->data=0;
        temp=temp->next;
    }
    while(One--){
        temp->data=1;
        temp=temp->next;
    }
    while(two--){
        temp->data=2;
        temp=temp->next;
    }
}
// without Using Data Replecement
Node* Sort012(Node* &head){
    // if(head==NULL){
    //     return NULL;
    // }
    // if(head->next==NULL){
    //     return head;
    // }
    // create dummy node
    Node* zerohead=new Node(-1);
    Node*  zerotail=zerohead;

    Node* Onehead=new Node(-1);
    Node* Onetail=Onehead;

    Node* twohead=new Node(-1);
    Node*  twotail=twohead;

    

    // traverce the Orignale LL
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            // Zero vali Node ko Orignale LL se alag kiya
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            // Zero vali node ko zerohead vali(dummy Node) LL me Joint karna
            zerotail->next=temp;
            zerotail=temp;
        }
        else if(curr->data==1){
            // One vali Node ko Orignale LL se alag kiya
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            // One vali node ko Onehead vali(dummy Node) LL me Joint karna
            Onetail->next=temp;
            Onetail=temp;
        }
        else if(curr->data==2){
            // two vali Node ko Orignale LL se alag kiya
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            // two vali node ko twohead vali(dummy Node) LL me Joint karna
            twotail->next=temp;
            twotail=temp;
        }
    }

    // ab zerohead, Onehead and twohead vali linkedlist ko  joint karna
    // Modyfiy Onehead vali LL mean -1 dummy Node of ko hatake Onehead node ko next point karna
    Node* temp=Onehead;
    Onehead=Onehead->next;
    temp->next=NULL;
    delete temp;

    // Modyfiy twohead vali LL
    temp=twohead;
    twohead=twohead->next;
    temp->next=NULL;
    delete temp; 

    // Joint Linked List
    if(Onehead!=NULL){
        // One wali list non empty
        zerotail->next=Onehead;
        // two wali list non empty
        if(twohead!=NULL){
            Onetail->next=twohead;
        }
    }
    else{
        // One wali list is empty than two wali non empty
        if(twohead!=NULL){
            zerotail->next=twohead;
        }
        // two wali empty than kuch karna hi nahi hai
    }
    // remove zerohead dummy node
    temp=zerohead;
    zerohead=zerohead->next;
    temp->next=NULL;
    delete temp;
    // return head of modufiy linked list
    return zerohead;
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
    Node* first=new Node(1);
    Node* second=new Node(2);
    Node* third=new Node(0);
    Node* fourth=new Node(1);
    Node* fifth=new Node(0);

// Connection of every Node next to creat Linklist  and fifth ka next=NULL
// firs->next (mean first ke next vala box(first ka second box addresh vala) (Node* next)) me =second (second ka address dal do (Node* second))
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    // Sort012UsingDataReplecement(first);
    PrintLinkedList(first);
    Node* head=Sort012(first);
    PrintLinkedList(head);
    return 0;
}