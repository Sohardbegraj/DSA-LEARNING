#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the decimal number you want to convert to bits: ";
    cin >> n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit =n & 1;//              if  n&1=1 then no. is odd or n&1=0 then no. is even
        ans =(bit * pow(10,i))+ ans;//  ans=0*10^0+0 ==> ans 0 
        n= n>>1;// it means right shift shift digit to right by 1
        i++;
    }
    cout<<"anwer is "<<ans<<endl;
    
    
    }