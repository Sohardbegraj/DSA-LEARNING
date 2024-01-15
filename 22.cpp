#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
            cout <<  " is a not prime number." << endl;
            break;
        }
        else{
            cout<<"prime"<<endl;
            break;
        }
    }   
    }