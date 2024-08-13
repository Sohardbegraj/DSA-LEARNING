#include <iostream>

using namespace std;
class node
{
public:
    int data;
    node* next;


    node(int value){
        this->data = value;
        this->next = nullptr;
    }
};




int main() {

    node *head= new node(10);
    node *second = head;
    cout<<head<<"<<<->>>"<<second<<endl;
    
}