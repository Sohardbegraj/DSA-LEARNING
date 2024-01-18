#include <iostream>
using namespace std;
//                  an array conatianing 2m+1 elements i.e. is odd  and there is 
//                      all no. repeating exactly two times but ther lies
//                a unique number between them which repeat only one time find it
int main(){
    int array[11]={8,10,7,99,55,55,44,44,7,8,99};
    int ans=0;
    for(int i=0;i<11;i++){
    ans=ans ^ array[i];
    }
    cout<<ans<<endl;
    
}
// here (^) xor act as follow 1) if two no. are same then ther xor is zero 
//                           2) if two numbers are different then their xor is not zero
//                            3)xor with 0 give same no. back i.e. 2^0=2