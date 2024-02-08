#include<iostream>
using namespace std;
//Creating Class Node
class Node{
public:
int value;
Node* next;
Node(int val){
value = val;
next = NULL;
}
};
//Function to insert Node at starting
void insert_at_head(Node* &head,int value){
Node* new_Node=new Node(value);
new_Node->next =head;
head = new_Node;
}
//Function to dispaly Linked List.
void display(Node* head){
Node* temp =head;
while(temp!=NULL){
cout<<temp->value<<"->";
temp=temp->next;
}
cout<<"NULL"<<endl;
}
int main(){
Node* head = NULL;
insert_at_head(head , 4); //Inserting First Node.
display(head);
insert_at_head(head , 3); //Inserting Second Node.
display(head);
insert_at_head(head , 2); //Inserting Third Node.
display(head);
insert_at_head(head , 1); //Inserting Fourth Node.
display(head);
}