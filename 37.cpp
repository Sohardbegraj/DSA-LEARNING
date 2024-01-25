#include <iostream>
using namespace std;

//                          bubble sort sort(use for array of small lenght compare neighbour element then sort accordingly)

void printarray(int num[],int n){
     for (int i=0;i<n;i++){                     // funtion to print array
        cout<<" "<<num[i]<<" ";
     }
     cout<<endl;

}

int main(){
    int arr[6] = {5,44,466,1,5,67};
    int n=sizeof(arr)/sizeof(arr[0]); // size of array

    for (int i=0 ;i<n-1;i++){
        for(int j=0;j<n-i;j++){                  // loop run to j<n-i-1 so that we can leave sorted array on right uninterupted without -1 in n-i-1 it drop last element
            if (arr[j]>arr[j+1]){                // if element at arr[j] is > arr[j+1] swap it and place largest elememt on left
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "The sorted array is: \n";
    printarray(arr,n);
    return 0;
    
}