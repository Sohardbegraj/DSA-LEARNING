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

void deleteNode(Node *&head,Node *&tail,int position){
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    int lenght=getlenght(head);
    if(head==tail){
        Node *temp=head;
        delete temp;
        head=NULL;
        tail=NULL;
        return;
    }
    if(position==1){
        Node *temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else if(position==lenght){
        Node *prev = head;
        while (prev->next!=tail)
        {
            prev=prev->next;
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
        return;
    }
    else{
        Node *prev = NULL;
        Node *curr=head;
        while(position!=1){
            position--;
            prev=curr;
            curr=curr->next;

        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
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
    deleteNode(head,tail,4);
    printLL(head);

}