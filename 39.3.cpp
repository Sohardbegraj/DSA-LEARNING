#include <iostream>
using namespace std;
#include<deque>// double ended queue

int main(){
    deque<int> dq; // create a double ended queue of integers
    
    dq.push_back(2) ;
    dq.push_front(7);
    cout << "The element at the front is: " << dq.front()<< endl; 
    cout << "The element at the back is: " << dq.back()<< endl; 
    cout << "Size of Deque = " << dq.size();
    cout << endl;


    for (int i=0 ;i<dq.size();i++)  {
        cout << dq[i] << " ";    
        }
        cout << endl;
         
    dq.pop_back();
      for (int i=0 ;i<dq.size();i++)  {
        cout << dq[i] << " ";    
        }
        cout << endl;
}