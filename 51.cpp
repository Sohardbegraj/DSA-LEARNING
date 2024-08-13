#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;
    Node *prev;

    Node(){
        this->next=NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }

};

int getlenght(Node *head){
    Node *temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
};

void insertAtHead(Node *&head,Node *&tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtTail(Node *&head,Node *&tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail=newNode;
    }
    else{
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}



int main(){

}