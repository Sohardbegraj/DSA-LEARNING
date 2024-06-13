#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++){
            char ch='a'+i;
            cout<<ch;
        }
        cout<<endl;
    }
    
    
    
}