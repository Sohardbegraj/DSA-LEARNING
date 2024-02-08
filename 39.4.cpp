#include <iostream>
using namespace std;
#include<list>
int main(){
    list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(4);
    l1.push_back(5);
    l1.push_front(10);

    for (int i : l1)  {
        cout << i << " ";    
    }
        cout << endl;

    l1.erase(l1.begin());
    for (int i : l1)  {
        cout << i << " ";    
    }
        cout << endl;
}