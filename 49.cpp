#include <iostream>
using namespace std;


int main(){
    
    int row,col;
    cin>>row;
    cin>>col;

    
    int**arr=new int*[row];    
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }
    
    
    
    
    
    
    return 0;
}