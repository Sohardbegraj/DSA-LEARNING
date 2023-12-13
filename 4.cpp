#include <iostream>
using namespace std;
int main() {
    int n,sum;
    cout<<"enter a number"<<endl;
    cin>>n;
    int i=1;
    sum=0;
    while (i<=n)// calulate sum of nth terms using loops
    {
        sum=sum+i;
        i+=1;
    }
    cout<<"the sum of the series is="<<sum<<endl;
    
}