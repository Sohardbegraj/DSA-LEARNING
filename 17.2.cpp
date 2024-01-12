//                                          PATTERN 3.5.2
#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;
    int i=1;
    
    while (i<=row){
        
        int j=i;   // triangle like
        while(j<=i){
            int j=1; 
            cout<< j<<" ";
            j=j+1;
        }
        
        cout<<endl;
        i+=1;
    }
}