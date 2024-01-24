#include <iostream>
using namespace std;

//                          selection sort(use for array of small lenght)

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

}

int main(){
    int arr[18] = {5, 3, 8, 10, 2,4,5,6,7,8,9,9,98,543,3,1,5,67};
    int n=sizeof(arr)/sizeof(arr[0]); // size of array

    for (int i=0 ;i<n-1;i++){

        for(int j=0;j<n-i;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "The sorted array is: \n";
    printarray(arr,n);
    return 0;
    
}