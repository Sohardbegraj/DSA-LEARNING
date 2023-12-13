//                                          PATERN 1.1  
#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;
    int i=1; // i=1 means 1st row if i=0 then we have to use while(i<row)
    while (i<=row){
        int j=1;
        while(j<=row){
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}