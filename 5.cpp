#include <iostream>
using namespace std;
int main() {
    int n,sum;
    sum=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    int i=2;
    while (i<=n)// calulate sum of nth {(even)} terms using loops
    {
        sum=sum+i;
        i+=2;
    }
    cout<<"the sum of the series is="<<sum<<endl;
    
}