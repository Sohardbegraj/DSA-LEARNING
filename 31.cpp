#include <iostream>
using namespace std;

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                  
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

};

int main(){
    int arr1d[10]={1,2,3,4,5,6,7,8,9,10};
    printarray(arr1d,10);

    int arr2d[3][3]={
        {1,2,3,},
        {4,5,6},
        {7,8,9}
    };
    for (int i=0;i<3;i++){  
        for(int j=0;j<3;j++){                
        cout<<" "<<arr2d[i][j]<<" ";}
           cout<<endl;
     }
     cout<<endl;

    int arr3d[2][3][3] = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        },
        {
            {10, 11, 12},
            {13, 14, 15},
            {16, 17, 18}
        }
    };
}