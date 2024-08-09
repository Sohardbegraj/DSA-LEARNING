#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(){
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void printLL(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
};
void getlenght(Node *head){
    Node *temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    cout<<"lenght is "<<count<<endl;
};

void insertAtHead(Node *&head,Node *&tail,int data){
    if (head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
    Node *newNode = new Node(data);
    newNode->next = head;
    head=newNode;
    }
}

void insertAtTail(Node *&head,Node *&tail,int data){
    if (head==NULL){
        Node *newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail=newNode;
    }
}
int main(){
    Node *head = new Node(10);
    Node *tail = head;
    insertAtTail(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtHead(head,tail,0);
    printLL(head);

}