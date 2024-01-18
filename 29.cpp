#include <iostream>
using namespace std;

//                      duplicate in array
int main(){
    int array[11]={1,2,3,10,5,6,7,8,9,10,4};
    int ans=0;
    for(int i=0;i<11;i++){
    ans=ans ^ array[i];
    ans=ans ^ i;
    }
    cout<<ans<<endl;
    
}