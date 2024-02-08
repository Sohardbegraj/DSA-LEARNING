#include <iostream>
using namespace std;

#include<stack>
// stack is a data structure that follows the Last In First Out (LIFO) principle.

int main(){
    // Creating an empty stack and pushing elements into it.
    stack<string> s1;
    s1.push("sohard");
    s1.push("sarthak");
    s1.push("abhishek");
    s1.push("abhimanyu");
    s1.push("aryan");
    s1.push("vivek");
    cout << "Size of the Stack: " << s1.size() << endl;
    cout << "top element of the Stack: " << s1.top() << endl;
    cout << "the Stack is empty or not: " << s1.empty() << endl;


} 