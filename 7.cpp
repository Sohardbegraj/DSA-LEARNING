//                                              checking input no. is prime or not
#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter a number"<<endl;
cin>>n;
int i=2;// starting from 2 becuse n%1==0 (always)
while (i<n)
{
    if (n%i==0)// using modulus operator
    {
        cout<<"enter is not a prime number"<<endl;
        
        break;
    }
    else {
        cout<<"enter is  a prime number"<<endl;
        break;
    }
    i+=1;
}

}