//                                               PATERNS-1(i=j type) i=>row & j=>column
#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++){
            cout<<"x";
        }
        cout<<endl;
    }
    
    return 0;
}