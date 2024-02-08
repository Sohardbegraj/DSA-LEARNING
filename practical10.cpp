#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack {
private:
    vector<T> elements;

public:
    bool isEmpty() const {
        return elements.empty();
    }

    void push(const T& item) {
        elements.push_back(item);
    }

    T pop() {
        if (!isEmpty()) {
            T topElement = elements.back();
            elements.pop_back();
            return topElement;
        } else {
            cerr << "Error: Stack is empty." << endl;
            exit(1);
        }
    }

    T& peek() {
        if (!isEmpty()) {
            return elements.back();
        } else {
            cerr << "Error: Stack is empty." << endl;
            exit(1);
        }
    }

    int size() const {
        return elements.size();
    }
};

int main() {
    Stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack size: " << stack.size() << endl;
    cout << "Top element: " << stack.peek() << endl;

    cout << "Pop: " << stack.pop() << endl;
    cout << "Pop: " << stack.pop() << endl;

    cout << "Stack size: " << stack.size() << endl;
    cout << "Top element: " << stack.peek() << endl;

    return 0;
}
