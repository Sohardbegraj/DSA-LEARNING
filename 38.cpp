#include <iostream>
using namespace std;//                        insertion sort(use for array of adaptable,stable)

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

}
int insertionsort(int arr[],int n){
    for(int i=0; i<n;i++){
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={12,45,67,39,8};
    int n = sizeof(arr)/sizeof(arr[0]);            // size of the array
    printarray(arr,n);                           // printing original array
    cout<<"Sorted Array is : \n";                // calling function
    insertionsort(arr,n);                       // sorting using insertion sort
    printarray(arr,n);                          // printing sorted array
}