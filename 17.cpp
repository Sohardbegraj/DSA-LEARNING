//                                          PATERN 3.5.1
#include <iostream>
using namespace std;
int main() {
    int row;
    cout<<"enter number of row"<<endl;
    cin>>row;
    int i=1;
    
    while (i<=row){
        int count=i; 
        int j=1;   // triangle like
        while(j<=i){
            cout<<count <<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}