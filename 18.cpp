//                                          PATTERN 3.5.2
#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;
    int i=1;
    
    while (i<=row){
        
        int j=1;   // triangle like
        while(j<=i){
            cout<< i-j+1<<" ";
            j=j+1;
        }
        
        cout<<endl;
        i+=1;
    }
}