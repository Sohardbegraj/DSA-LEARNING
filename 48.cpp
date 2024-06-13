#include <iostream>
using namespace std;
//                     2d array implimentation

int main(){
    int arr[3][3];    
    for (int i = 0; i < 3; i++){//           i is row
        for (int j = 0; j < 3; j++){//       j is column
            cin>>arr[i][j]; //input elements of the array
        }
        
    }

    cout<<"The entered matrix is : "<<endl;

    for (int i = 0; i < 3; i++){//           i is row
        for (int j = 0; j < 3; j++){//       j is column
            cout<<arr[i][j]<<" "; //input elements of the array
        }
        cout<<"\n";
        
    }



    return 0;
}