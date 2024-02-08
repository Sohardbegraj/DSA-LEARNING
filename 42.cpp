#include <iostream>
using namespace std;
void printarray(int arr[],int x){
     for (int i=0;i<x;i++){                     // funtion to print array
        cout<<" "<< arr[i]<<" ";
     }
     cout<<endl;

}

void movezeroestoright(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}


void movezeroestoleft(int arr[],int n){   // it nothing but sorting it to increasing order
    int i, j, minIndex;
    i = 0;
    while (i < n - 1) {             // loop run till n-1
        minIndex = i;
        j = i + 1;
        while (j < n) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            j++;
        }
        // Swap elements
        swap(arr[i], arr[minIndex]);
        i++;
    }
}
int main(){
    int arr[6]={1,0,8,0,7,76};
    cout<<"Original array is: \n";
    printarray(arr,6);
    movezeroestoright(arr,6);
    cout<<"Array after moving zeroes to right: \n";
    printarray(arr,6);
    movezeroestoleft(arr,6);
    cout<<"\nArray after moving zeroes back to left:\n";
    printarray(arr,6);
    return 0; 
}