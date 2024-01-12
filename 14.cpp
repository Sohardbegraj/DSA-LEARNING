//                                          PATERN 3.2
#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;
    int i=1;
    while (i<=row){
        int j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}