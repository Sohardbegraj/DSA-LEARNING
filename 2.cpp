#include <iostream>
using namespace std;
int main() {
    int a=9;
    if (a==9){
        cout<<"niney"; // both if are executed if true
    }
    if(a>0){
        cout<<"positive number\n";
    }
    else{
        cout<<"negative number or zero";
    }




    int x=2;
    int y=x+1;             //-->y=3
    if ((x=3)==y){         //-->now x is updated to 3
        cout<<x<<endl;
    }
    else{
       cout<<x+25<<endl;
    }




     int p=24;
    if (p>20){
        cout<<"sohard"; // only one will execute
    }
    else if(p==24){
        cout<<"begraj";
    }
    else{
        cout<<"easy";
    }
    cout<<p;
}