#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter a character"<<endl;
    cin>>ch;
    int x=ch; // typcasting of char to int and maching corresponding values to ascii table

    if(x>=48 && x<=57){
        cout << "The entered number is numeric: " << endl;
        
    }
    else if(x>=97 && x<=122){
        cout << "The entered character is lower case alphabet." << endl;
        
    }
    else if(x>=65 && x<=90){
        cout << "The entered character is upper case alphabet." << endl;
       
    }
    else {
        cout<<"enter another character"<<endl;
        
    }
    }