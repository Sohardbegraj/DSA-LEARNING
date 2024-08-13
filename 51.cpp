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
void printLL(Node *head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
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

void insertAtPosition(Node *&head,Node *&tail,int data,int position){
    int lenght=getlenght(head);
    
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail=newNode;
    }

    if (position<=1)
    {
        insertAtHead(head,tail,data);
    }
    else if(position>=lenght){
        insertAtTail(head,tail,data);
    }
    else{
        Node *newNode = new Node(data);
        Node *prevNode =NULL;
        Node *currNode = head;
        while(position!=1){
            position--;
            prevNode=currNode;
            currNode=currNode->next;
        }
        prevNode->next=newNode;
        newNode->prev=prevNode;
        newNode->next=currNode;
        currNode->prev=newNode;

    }
    
};
void deleteNode(Node *&head,Node *&tail,int position){
    int lenght=getlenght(head);
    if(head==NULL){
        cout<<"empty list"<<endl;
    }
    else{
        if(position==1){
            Node *temp=head;
            head=head->next;
            temp->next=NULL;
            head->prev=NULL;
            delete temp;

        }
        else if(position==lenght){
            Node *prevNode=tail->prev;
            prevNode->next=NULL;
            tail->prev=NULL;
            delete tail;
            tail=prevNode;
        }
        else{
            Node *prevNode=NULL;
            Node *currNode = head;
            while(position!=1){
                position--;
                prevNode=currNode;
                currNode=currNode->next;
            }
            Node *nextNode=currNode->next;
            prevNode->next=nextNode;
            currNode->prev=NULL;
            currNode->next=NULL;
            nextNode->prev=prevNode;

            delete currNode;

        }
    }
}



int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtTail(head,tail,70);
    insertAtTail(head,tail,80);
    printLL(head);
    insertAtPosition(head,tail,10,1);
    printLL(head);
    deleteNode(head,tail,6);
    printLL(head);
    return 0;
}