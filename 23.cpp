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
        int bit =n & 1;                         // if  n&1=1 then no. is odd or n&1=0 then no. is even
        ans =(bit * pow(10,i))+ ans;           // ans=0*10^0+0 ==> ans 0 
        n= n>>1;                              //   it means right shift shift digit to right by 1
        i++;
    }
    cout<<"anwer is "<<ans<<endl;
    
    return 0;
    }


    // example :n=5
    // 5&1=1 as 5=101 is binary 101 & 001= 001
    //4&1=0 as 4=100 in binary 100 & 001 =000
    // this way we can get ending digits of binary 
    // to get another digit we perforn right shift operation [>>]-->symbol of right shift